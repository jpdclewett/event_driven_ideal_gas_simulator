#ifndef TIMER_H
#define TIMER_H

#include <stdint.h>

typedef uint32_t milliseconds;
typedef uint32_t microseconds;

milliseconds timer_now_ms(void);
milliseconds timer_since_ms(milliseconds);
milliseconds timer_until_ms(milliseconds);

void timer_delay_us(microseconds timestamp);

#endif // TIMER_H
