#include "server/Server.h"

const unsigned short PORT = 28888;
const int THREADS = 4;

int main(int argc, char** argv)
{
    MyServer server(PORT, THREADS);
    server.run(argc, argv);
    return 0;
}
