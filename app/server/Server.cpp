#include "Server.h"
#include "SimpleHandler.h"
#include <Poco/Net/TCPServer.h>
#include <iostream>

MyServer::MyServer(unsigned short port, int threads) : port(port), threads(threads)
{
}

int MyServer::main(const std::vector<std::string>& args)
{
    auto serverParams = new Poco::Net::TCPServerParams();
    serverParams->setMaxThreads(threads);

    Poco::Net::TCPServer srv(new HandlerFactory, port, serverParams);
    srv.start();
    waitForTerminationRequest();
    srv.stop();

    return Poco::Util::Application::EXIT_OK;
}
