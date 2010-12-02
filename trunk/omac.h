#ifndef _OMAC_H_
#define _OMAC_H_

#define MAX_H 4
#define MAX_NODE_ID 21
const int16_t HOP[MAX_NODE_ID] = {0, -1, 1, 3, -1, 2, 1, 3, 3, 3, 2, 3, 2, 2, 3, -1, 3, -1, -1, -1, 3}; 
const int16_t SLEEPTIME[MAX_H] ={0, 135, 175, 30000};

//const int16_t SLEEPTIME[MAX_H] ={0, 91, 136, 1000};

#endif
