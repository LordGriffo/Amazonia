#include <iostream>
#include <filesystem>

void moveFile(const std::string& source, const std::string& destination) {
    if (std::filesystem::exists(destination)) {
        std::cout << "Já existe um arquivo ou diretório com o mesmo nome no destino." << std::endl;
        return;
    }
    
    std::error_code errorCode;
    std::filesystem::rename(source, destination, errorCode);
    
    if (errorCode) {
        std::cout << "Erro ao mover o arquivo: " << errorCode.message() << std::endl;
    } else {
        std::cout << "Movimentação concluída: " << source << " -> " << destination << std::endl;
    }
}

void moveDirectoryRecursive(const std::string& sourceDir, const std::string& destinationDir) {
    for (const auto& entry : std::filesystem::recursive_directory_iterator(sourceDir)) {
        const std::string sourcePath = entry.path().string();
        const std::string relativePath = entry.path().lexically_relative(sourceDir).string();
        const std::string destinationPath = destinationDir + "/" + relativePath;
        
        if (entry.is_regular_file()) {
            moveFile(sourcePath, destinationPath);
        } else if (entry.is_directory()) {
            std::filesystem::create_directory(destinationPath);
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
    
    if (std::filesystem::exists(destinationPath) && !std::filesystem::is_directory(destinationPath)) {
        std::cout << "O destino não é um diretório válido." << std::endl;
        return 1;
    }
    
    moveDirectoryRecursive(sourceDir, destinationDir);
    
    return 0;
}
