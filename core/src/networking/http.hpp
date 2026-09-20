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
    
public:
    TcpSocket(int domain, int type, int protocol);
};
}

#endif