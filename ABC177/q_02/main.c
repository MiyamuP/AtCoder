//
//  main.c
//  q_02
//
//  Created by k19104kk on 2020/08/29.
//  Copyright © 2020 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s[1001], t[1001];
    scanf("%s", s);
    scanf("%s", t);
    
    long long i=0, j=0, maxcnt=0, input_t = 0;
    
    while (s[i] != '\0') {
        long long cnt=0;
        while (t[j] != '\0') {
            if (s[i+j] == '\0') {
                cnt = 0;
                break;
            }
            if (s[i+j] == t[j]) {
                cnt++;
            }
            j++;
        }
        input_t = j;
        j=0;
        if (cnt>maxcnt) {
            maxcnt = cnt;
        }
        i++;
    }
    
    while (t[j] !=0) {
        j++;
    }
    
    printf("%lld\n", j-maxcnt);
    return 0;
}
