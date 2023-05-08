//
//  main.c
//  q_01
//
//  Created by k19104kk on 2020/08/29.
//  Copyright © 2020 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long d,t,s;
    scanf("%lld %lld %lld",&d,&t,&s);
    if (d<=t*s) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
