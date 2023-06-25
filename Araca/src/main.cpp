#include <iostream>
#include <filesystem>



#define RESET_COLOR "\033[0m"
#define BLACK_COLOR "\033[30m"
#define RED_COLOR "\033[31m"
#define GREEN_COLOR "\033[32m"
#define ORANGE_COLOR "\033[33m"
#define BLUE_COLOR "\033[34m"
#define MAGENTA_COLOR "\033[35m"
#define CYAN_COLOR "\033[36m"
#define WHITE_COLOR "\033[37m"
#define GRAY_COLOR "\033[90m"
#define LIGHT_RED_COLOR "\033[91m"
#define LIGHT_GREEN_COLOR "\033[92m"
#define LIGHT_YELLOW_COLOR "\033[93m"
#define LIGHT_BLUE_COLOR "\033[94m"
#define LIGHT_MAGENTA_COLOR "\033[95m"
#define LIGHT_CYAN_COLOR "\033[96m"
#define BG_BLACK_COLOR "\033[40m"
#define BG_RED_COLOR "\033[41m"
#define BG_GREEN_COLOR "\033[42m"
#define BG_YELLOW_COLOR "\033[43m"
#define BG_BLUE_COLOR "\033[44m"
#define BG_MAGENTA_COLOR "\033[45m"
#define BG_CYAN_COLOR "\033[46m"
#define BG_WHITE_COLOR "\033[47m"
#define BG_GRAY_COLOR "\033[100m"
#define BG_LIGHT_RED_COLOR "\033[101m"
#define BG_LIGHT_GREEN_COLOR "\033[102m"
#define BG_LIGHT_YELLOW_COLOR "\033[103m"
#define BG_LIGHT_BLUE_COLOR "\033[104m"
#define BG_LIGHT_MAGENTA_COLOR "\033[105m"
#define BG_LIGHT_CYAN_COLOR "\033[106m"



void printTree(const std::filesystem::path& path, int level = 0) {
    if (!std::filesystem::exists(path)) {
        std::cout << "Diretório não encontrado: " << path << std::endl;
        return;
    }

    if (std::filesystem::is_regular_file(path)) {
        std::cout << std::string(level, ' ') << "- " << ORANGE_COLOR << path.filename() << RESET_COLOR << std::endl;
    } else if (std::filesystem::is_directory(path)) {
        std::cout << std::string(level, ' ') << GREEN_COLOR << "+ " << path.filename() << "/" << RESET_COLOR << std::endl;
        for (const auto& entry : std::filesystem::directory_iterator(path)) {
            printTree(entry.path(), level + 2);
        }
    }
}

int main(int argc, char* argv[]) {
    std::filesystem::path directory;

    if (argc > 1) {
        directory = argv[1];
    } else {
        directory = std::filesystem::current_path();
    }

    printTree(directory);

    return 0;
}









/*
 * 
// Define cores usando sequências de escape ANSI
#define RESET_COLOR "\033[0m"
#define GREEN_COLOR "\033[32m"
#define ORANGE_COLOR "\033[33m"
#define BLACK_COLOR "\033[30m"
#define RED_COLOR "\033[31m"
#define BLUE_COLOR "\033[34m"
#define MAGENTA_COLOR "\033[35m"
#define CYAN_COLOR "\033[36m"
#define WHITE_COLOR "\033[37m"
#define BG_BLACK_COLOR "\033[40m"
#define BG_RED_COLOR "\033[41m"
#define BG_GREEN_COLOR "\033[42m"
#define BG_YELLOW_COLOR "\033[43m"
#define BG_BLUE_COLOR "\033[44m"
#define BG_MAGENTA_COLOR "\033[45m"
#define BG_CYAN_COLOR "\033[46m"
#define BG_WHITE_COLOR "\033[47m"


#define RESET_COLOR "\033[0m"
#define BLACK_COLOR "\033[30m"
#define RED_COLOR "\033[31m"
#define GREEN_COLOR "\033[32m"
#define YELLOW_COLOR "\033[33m"
#define BLUE_COLOR "\033[34m"
#define MAGENTA_COLOR "\033[35m"
#define CYAN_COLOR "\033[36m"
#define WHITE_COLOR "\033[37m"
#define GRAY_COLOR "\033[90m"
#define LIGHT_RED_COLOR "\033[91m"
#define LIGHT_GREEN_COLOR "\033[92m"
#define LIGHT_YELLOW_COLOR "\033[93m"
#define LIGHT_BLUE_COLOR "\033[94m"
#define LIGHT_MAGENTA_COLOR "\033[95m"
#define LIGHT_CYAN_COLOR "\033[96m"


#define BG_BLACK_COLOR "\033[40m"
#define BG_RED_COLOR "\033[41m"
#define BG_GREEN_COLOR "\033[42m"
#define BG_YELLOW_COLOR "\033[43m"
#define BG_BLUE_COLOR "\033[44m"
#define BG_MAGENTA_COLOR "\033[45m"
#define BG_CYAN_COLOR "\033[46m"
#define BG_WHITE_COLOR "\033[47m"
#define BG_GRAY_COLOR "\033[100m"
#define BG_LIGHT_RED_COLOR "\033[101m"
#define BG_LIGHT_GREEN_COLOR "\033[102m"
#define BG_LIGHT_YELLOW_COLOR "\033[103m"
#define BG_LIGHT_BLUE_COLOR "\033[104m"
#define BG_LIGHT_MAGENTA_COLOR "\033[105m"
#define BG_LIGHT_CYAN_COLOR "\033[106m"


#define RESET_COLOR "\033[0m"
#define BLACK_COLOR "\033[30m"
#define RED_COLOR "\033[31m"
#define GREEN_COLOR "\033[32m"
#define YELLOW_COLOR "\033[33m"
#define BLUE_COLOR "\033[34m"
#define MAGENTA_COLOR "\033[35m"
#define CYAN_COLOR "\033[36m"
#define WHITE_COLOR "\033[37m"
#define GRAY_COLOR "\033[90m"
#define LIGHT_RED_COLOR "\033[91m"
#define LIGHT_GREEN_COLOR "\033[92m"
#define LIGHT_YELLOW_COLOR "\033[93m"
#define LIGHT_BLUE_COLOR "\033[94m"
#define LIGHT_MAGENTA_COLOR "\033[95m"
#define LIGHT_CYAN_COLOR "\033[96m"

#define BG_BLACK_COLOR "\033[40m"
#define BG_RED_COLOR "\033[41m"
#define BG_GREEN_COLOR "\033[42m"
#define BG_YELLOW_COLOR "\033[43m"
#define BG_BLUE_COLOR "\033[44m"
#define BG_MAGENTA_COLOR "\033[45m"
#define BG_CYAN_COLOR "\033[46m"
#define BG_WHITE_COLOR "\033[47m"
#define BG_GRAY_COLOR "\033[100m"
#define BG_LIGHT_RED_COLOR "\033[101m"
#define BG_LIGHT_GREEN_COLOR "\033[102m"
#define BG_LIGHT_YELLOW_COLOR "\033[103m"
#define BG_LIGHT_BLUE_COLOR "\033[104m"
#define BG_LIGHT_MAGENTA_COLOR "\033[105m"
#define BG_LIGHT_CYAN_COLOR "\033[106m"
*/





