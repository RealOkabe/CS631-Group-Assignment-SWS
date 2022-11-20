#ifndef HANDLER_H_
#define HANDLER_H_

#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <sys/socket.h>
#include <unistd.h>

void handleConnection(int fd, struct sockaddr_in6 client);

void handleSocket(int socket);

#endif /* !HANDLER_H_ */