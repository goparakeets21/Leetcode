#include "stdio.h"
#include "stdbool.h"
#include "limits.h"

int reverse(int x) {
    long long rvse = 0;
    const bool neg = (x < 0) ? true : false;

    //Grab the Absolute Value
    if(neg) {
      x *= -1;
    }

    //reverse the integer
    while(x) {
        rvse = (rvse * 10) + (x % 10);
        x = x / 10;
    }

    //negate if necessary
    rvse = ((neg) ? (-1 * rvse) : rvse);

    return (((rvse < INT_MIN) || (rvse > INT_MAX)) ? 0 : rvse);
}
