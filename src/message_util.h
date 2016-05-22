#ifndef __message_util_h__
#define __message_util_h__

#include <stdint.h>
#include <string.h>

#include "message.h"

akh_pdu_header createHeader(uint16_t msg_type, uint32_t seq_num);
void displayHeader(akh_pdu_header header);
size_t createPacket(packet *pac, akh_pdu_header header, akh_pdu_body body, size_t body_len);
void deletePacket(packet pac);

#endif

