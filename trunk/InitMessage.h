#ifndef INIT_MESSAGE_H
#define INIT_MESSAGE_H

typedef nx_struct init_msg {
   nx_int16_t b;
   nx_int16_t h;
} init_msg_t;

enum {
    AM_INIT_MSG = 6,
};

#endif
