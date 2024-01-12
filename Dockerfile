FROM ubuntu:22.04

RUN apt-get update && DEBIAN_FRONTEND=noninteractive
RUN apt-get install -y build-essential git ninja-build cmake \
    gcc g++ wget libpoco-dev telnet

WORKDIR /tcp-server

COPY . .

RUN chmod +x ./build.sh \
    && ./build.sh

EXPOSE 28888
