#ifndef SERVER_H
#define SERVER_H
#include <stdio.h>
#include <stdlib.h>
#define PORT 1025
#define CONNECTION_BACKLOG 10
#define READ_BUFFER_SIZE 1024


int find_temperature(char* city);
float find_stock_price(char* stock);





#endif
