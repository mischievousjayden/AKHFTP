#ifndef __FILE_TRANSMISSION_H__
#define __FILE_TRANSMISSION_H__

#include <stdio.h>
#include <arpa/inet.h>
#include <unistd.h>

#include "error_handling.h"
#include "message.h"
#include "message_util.h"
#include "file_util.h"
#include "security_util.h"
#include "network_util.h"
#include "file_transmission.h"


int test_receive_file(int sock, struct sockaddr_in *send_adr, socklen_t *send_adr_sz);
// reciever uses the function
int recieve_file();

// sender uses the function
int send_file(int sock, struct sockaddr_in *recv_adr, char *filename, akh_disconn_response disconn_response);

#endif

