#ifndef _OMAC_H_
#define _OMAC_H_

#define MAX_H 4
#define MAX_NODE_ID 21
const int16_t HOP[MAX_NODE_ID] = {-1, -1, 1, 3, -1, 2, 1, 3, 3, 3, 2, 3, 2, 2, 3, 0, 3, -1, -1, -1, 3}; 
const uint16_t SLEEPTIME[MAX_H] ={0, 11, 15, 65500};

//const uint16_t SLEEPTIME[MAX_H] ={0, 100, 100, 100};

#endif
