#ifndef INCLUDE_FOR_FORK
#define INCLUDE_FOR_FORK
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdlib.h>
#include <strings.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/poll.h>
#include "../mboi.h"



typedef struct {
    int _id;
    char name[30];
}Player;

int port;
int thread_id[16];
int game_sockd;

#endif
