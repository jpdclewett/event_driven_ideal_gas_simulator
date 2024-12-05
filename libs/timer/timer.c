#include "timer/timer.h"

#include <sys/time.h>
#include <stdio.h>

milliseconds timer_now_ms(void) {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    return (milliseconds)(tp.tv_sec*1000 + tp.tv_usec/1000);
}

// Assume overflow has occurred when the absolute difference between now and timestamp
// is greater than UINT32_MAX/2. This limit's functionality to time periods of
// UINT32_MAX/2 ms, or approximately 24 days.

milliseconds timer_since_ms(milliseconds timestamp) {
    milliseconds now = timer_now_ms();
    if(now > timestamp) {
        return (milliseconds)(now - timestamp);
    } else if(timestamp - now > UINT32_MAX/2) {
        // Handle uint32_t overflow.
        return (milliseconds)(UINT32_MAX - timestamp + now + 1);
    } else {
        return (milliseconds)0;
    }
}

milliseconds timer_until_ms(milliseconds timestamp) {
    milliseconds now = timer_now_ms();
    if(now < timestamp) {
        return (milliseconds)(timestamp - now);
    } else if(now - timestamp > UINT32_MAX/2) {
        // Handle uint32_t overflow.
        return (milliseconds)(UINT32_MAX - now + timestamp + 1);
    } else {
        return (milliseconds)0;
    }
}

void timer_delay_us(microseconds delay_us) {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    uint32_t time_start_us = tp.tv_usec;
    uint32_t time_now_us;
    do {
        gettimeofday(&tp, NULL);
        time_now_us = tp.tv_usec;
    } while (time_start_us + delay_us > time_now_us);
}