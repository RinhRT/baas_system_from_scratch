#include "http.hpp"

using namespace TCP_S;

TcpSocket::TcpSocket(int domain, int type, int protocol) {
    int socketfd = socket(domain, type, protocol);
    if (socketfd < 0) {
        std::cerr<<"Cannot create socket..\n";
        exit(EXIT_FAILURE);
    }
}