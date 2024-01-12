# POCO Reverse echo tcp server
The objective of this task is to create a simple TCP server using the POCO library (https://pocoproject.org). The server should accept connections on port 28888 and reverse any string entered by the client.

## Instruction
Build and run TCP Server:
```sh
./build.sh && ./install/bin/tcp_server
```

Connect to server using telnet on port 28888 :
```sh
telnet 28888
```
