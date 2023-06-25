#include <iostream>
#include <string>
#include <cstring>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
    int serverSocket, clientSocket;
    struct sockaddr_in serverAddr, clientAddr;
    char buffer[1024];

    // Criar o socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        std::cerr << "Erro ao criar o socket." << std::endl;
        return 1;
    }

    // Configurar o endereço do servidor
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(8080);

    // Vincular o socket a um endereço e porta
    if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        std::cerr << "Erro ao vincular o socket." << std::endl;
        return 1;
    }

    // Escutar por conexões
    listen(serverSocket, 1);

    std::cout << "Aguardando conexões..." << std::endl;

    // Aceitar conexão de um cliente
    socklen_t clientAddrLen = sizeof(clientAddr);
    clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddr, &clientAddrLen);
    if (clientSocket < 0) {
        std::cerr << "Erro ao aceitar a conexão." << std::endl;
        return 1;
    }

    std::cout << "Conexão estabelecida com sucesso." << std::endl;

    // Receber dados do cliente
    memset(buffer, 0, sizeof(buffer));
    int bytesRead = read(clientSocket, buffer, sizeof(buffer));
    if (bytesRead < 0) {
        std::cerr << "Erro ao receber dados do cliente." << std::endl;
        return 1;
    }

    std::cout << "Mensagem recebida do cliente: " << buffer << std::endl;

    // Enviar resposta ao cliente
    std::string response = "Olá, cliente!";
    if (write(clientSocket, response.c_str(), response.length()) < 0) {
        std::cerr << "Erro ao enviar resposta ao cliente." << std::endl;
        return 1;
    }

    // Fechar conexão com o cliente
    close(clientSocket);

    // Fechar o socket do servidor
    close(serverSocket);

    return 0;
}

