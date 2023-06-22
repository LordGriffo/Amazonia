#include <iostream>
#include <fstream>
#include <filesystem>

void copyFile(const std::string& source, const std::string& destination) {
    std::ifstream src(source, std::ios::binary);
    std::ofstream dest(destination, std::ios::binary);
    
    if (!src) {
        std::cout << "Erro ao abrir o arquivo de origem." << std::endl;
        return;
    }
    
    if (!dest) {
        std::cout << "Erro ao abrir o arquivo de destino." << std::endl;
        return;
    }
    
    dest << src.rdbuf();
    
    src.close();
    dest.close();
}

void copyDirectoryRecursive(const std::string& sourceDir, const std::string& destinationDir) {
    std::filesystem::create_directories(destinationDir);
    
    for (const auto& entry : std::filesystem::directory_iterator(sourceDir)) {
        const std::string sourcePath = entry.path().string();
        const std::string relativePath = entry.path().lexically_relative(sourceDir).string();
        const std::string destinationPath = destinationDir + "/" + relativePath;
        
        if (entry.is_regular_file()) {
            copyFile(sourcePath, destinationPath);
        } else if (entry.is_directory()) {
            copyDirectoryRecursive(sourcePath, destinationPath);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "Uso: " << argv[0] << " <diretorio_origem> <diretorio_destino>" << std::endl;
        return 1;
    }
    
    const std::string sourceDir = argv[1];
    const std::string destinationDir = argv[2];
    
    std::filesystem::path sourcePath(sourceDir);
    std::filesystem::path destinationPath(destinationDir);
    
    if (!std::filesystem::exists(sourcePath)) {
        std::cout << "Diretório de origem não encontrado." << std::endl;
        return 1;
    }
    
    if (!std::filesystem::is_directory(sourcePath)) {
        std::cout << "A origem não é um diretório válido." << std::endl;
        return 1;
    }
    
    copyDirectoryRecursive(sourceDir, destinationDir);
    
    std::cout << "Cópia concluída!" << std::endl;
    
    return 0;
}
