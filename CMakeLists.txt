cmake_minimum_required(VERSION 3.16)
project(server)

find_package(Poco REQUIRED Foundation Net Util)

set(SRC
    app/main.cpp
    app/server/Server.cpp
    app/server/Server.h
    app/server/SimpleHandler.cpp
    app/server/SimpleHandler.h
    )

add_executable(tcp_server ${SRC})

target_link_libraries(
    tcp_server
    PRIVATE Poco::Foundation
    PRIVATE Poco::Net
    PRIVATE Poco::Util
)

install(TARGETS tcp_server DESTINATION bin)
