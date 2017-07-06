#include "string.h"

#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int lengthOfLongestSubstring(char* s) {
    int d[256]; //stores index of last seen instance of character

    int maxLen = 0;
    int start = -1;
    int s_len;
    int i;

    //Init array
    memset(&d, -1, sizeof(d));

    s_len = strlen(s);

    //iterate over string
    for(i = 0; i != s_len; ++i) {

        //if we have seen this character already, we have reached
        //the max substring for that section. reset the start
        if(d[s[i]] > start) {
            start = d[s[i]];
        }

        //update index
        d[s[i]] = i;
        maxLen = MAX(maxLen, i - start);
    }

    return maxLen;
}
