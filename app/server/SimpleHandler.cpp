#include "SimpleHandler.h"

#include <Poco/Net/SocketStream.h>
#include <string>

Poco::Net::TCPServerConnection* HandlerFactory::createConnection(const Poco::Net::StreamSocket& socket)
{
    return new SimpleHandler(socket);
}

SimpleHandler::SimpleHandler(const Poco::Net::StreamSocket& socket) : Poco::Net::TCPServerConnection(socket)
{
}

void SimpleHandler::run()
{
    Poco::Net::SocketStream socketStream(socket());
    socketStream << "Welcome to POCO TCP server. Enter you string:" << std::endl;

    std::string str;
    std::getline(socketStream, str);

    if (str.size() > 255) {
        socketStream << "Error: the line is not to exceed 255 symbols." << std::endl;
        return;
    }

    std::reverse(str.begin(), str.end());
    socketStream << str << "\n";
}
