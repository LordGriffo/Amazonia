#include <iostream>
#include <string>
#include <cstring>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
    int clientSocket;
    struct sockaddr_in serverAddr;
    char buffer[1024];

    // Criar o socket
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        std::cerr << "Erro ao criar o socket." << std::endl;
        return 1;
    }

    // Configurar o endereço do servidor
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(8080);

    // Converter o endereço IP para binário
    if (inet_pton(AF_INET, "127.0.0.1", &(serverAddr.sin_addr)) <= 0) {
        std::cerr << "Endereço inválido." << std::endl;
        return 1;
    }

    // Conectar ao servidor
    if (connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        std::cerr << "Erro ao conectar ao servidor." << std::endl;
        return 1;
    }

    std::cout << "Conectado ao servidor." << std::endl;

    // Enviar mensagem ao servidor
    std::string message = "Olá, servidor!";
    if (write(clientSocket, message.c_str(), message.length()) < 0) {
        std::cerr << "Erro ao enviar mensagem ao servidor." << std::endl;
        return 1;
    }

    // Receber resposta do servidor
    memset(buffer, 0, sizeof(buffer));
    int bytesRead = read(clientSocket, buffer, sizeof(buffer));
    if (bytesRead < 0) {
        std::cerr << "Erro ao receber resposta do servidor." << std::endl;
        return 1;
    }

    std::cout << "Resposta recebida do servidor: " << buffer << std::endl;

    // Fechar a conexão com o servidor
    close(clientSocket);

    return 0;
}
