#pragma once
#ifndef TCP_SERVER
#define TCP_SERVER

#include <iostream>

#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

namespace TCP_S {
class TcpSocket {
private:
    int socketfd = 0;
    struct sockaddr_in address;
    int port = 8000;

    void creating(int domain, int type, int protocol);
    void binding(int domain, int interface, int port);
public:
    TcpSocket(
        int domain=AF_INET,
        int type=SOCK_STREAM,
        int protocol=0,
        int port=8000,
        u_long interface=INADDR_ANY
    );

    void test_connection(int item, std::string msg);

    void start();
    void end();
};
}

#endif