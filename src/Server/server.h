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
#include<signal.h>
#include "../mboi.h"

#define MAX_PL 16
#define thr_max_cnt 50



typedef struct {
    int _id;
    char name[30];
}Player;

void * Game(void * arg);
void nn_sg(message* msg, Player* pl, int sock);

int port;
int thread_id[thr_max_cnt];
int game_sockd;
message** gm;

#endif
