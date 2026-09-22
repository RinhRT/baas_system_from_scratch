#include "TcpServer.hpp"

using namespace TCP_S;

void TcpSocket::creating(int domain, int type, int protocol) {
    this->socketfd = socket(domain, type, protocol);
    test_connection(this->socketfd, "Error creating the socket...");
}


void TcpSocket::binding(int domain, int interface, int port) {
    int opt = 1;
    setsockopt(this->socketfd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    this->address.sin_addr.s_addr = interface;
    this->address.sin_family = domain;
    this->address.sin_port = htons(port);

    int binding = bind(this->socketfd, (struct sockaddr*)&this->address, sizeof(this->address));
    test_connection(binding, "Error binding to the socket...");
}


void TcpSocket::start() {
    int listening = listen(this->socketfd, 10);
    test_connection(listening, "Failed to start server...");

    std::cout<<"Server started on port "<<this->port<<".\n";
}


void TcpSocket::end() {
    close(this->socketfd);
    std::cout<<"Server stopped.\n";
}


TcpSocket::TcpSocket(int domain, int type, int protocol, int port, u_long interface) {
    this->creating(domain, type, protocol);
    this->binding(domain, interface, port);
}


void TcpSocket::test_connection(int item, std::string msg) {
    if (item < 0) {
        std::cout<<msg<<'\n';
        exit(EXIT_FAILURE);
    }
}