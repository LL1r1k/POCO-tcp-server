#pragma once

#include <Poco/Util/ServerApplication.h>

class MyServer : public Poco::Util::ServerApplication {
public:
    MyServer(unsigned short port, int threads);

protected:
    int main(const std::vector<std::string>& args) override;

private:
    unsigned short port;
    int threads;
};
