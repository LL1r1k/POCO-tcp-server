#pragma once

#include <Poco/Net/StreamSocket.h>
#include <Poco/Net/TCPServerConnection.h>
#include <Poco/Net/TCPServerConnectionFactory.h>

class HandlerFactory : public Poco::Net::TCPServerConnectionFactory {
public:
    Poco::Net::TCPServerConnection* createConnection(const Poco::Net::StreamSocket& socket) override;
};

class SimpleHandler : public Poco::Net::TCPServerConnection {
public:
    SimpleHandler(const Poco::Net::StreamSocket& socket);

    void run();
};
