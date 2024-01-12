cmake_minimum_required(VERSION 3.16)
project(main)

find_package(Poco REQUIRED Foundation Net)

add_executable(main main.cpp)

target_link_libraries(
    main
    PRIVATE Poco::Foundation
    PRIVATE Poco::Net
)

install(TARGETS main DESTINATION bin)
