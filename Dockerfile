FROM ubuntu:22.04

RUN apt update && \
    apt install -y g++

WORKDIR /app

COPY . .

RUN g++ src/calculator.cpp tests/test.cpp -o test

CMD ["./test"]