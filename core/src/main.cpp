#include <iostream>
#include "networking/http.hpp" 

int main() {
    using namespace TCP_S;

    TcpSocket app = TcpSocket(AF_INET, SOCK_STREAM, 0);
    std::cout<<"ok\n";

    return 0;
}