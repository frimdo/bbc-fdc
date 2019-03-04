#ifndef _GCR_H_
#define _GCR_H_

// State machine
#define GCR_IDLE 0
#define GCR_ID 1
#define GCR_DATA 2

extern void gcr_addsample(const unsigned long samples, const unsigned long datapos);

extern void gcr_init(const int debug, const char density);

#endif
