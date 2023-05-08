//
//  main.c
//  q_03_02
//
//  Created by k19104kk on 2020/08/29.
//  Copyright © 2020 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long n;
    scanf("%lld", &n);
    
    long long ai[n], as[n];
    
    for (int i=0; i<n; i++) {
        scanf("%lld", &ai[i]);
        
        if (i==0) {
            as[i] = ai[i];
        } else {
            as[i] = as[i-1]+ai[i];
        }
    }
    
    long long result = 0;
    
    long long waru = 1000000007;
    
    for (int i=0; i<n-1; i++) {
        result += (ai[i]%waru) * ((as[n-1]-as[i])%waru);
        result %= waru;
    }
    
    printf("%lld\n", result);
    return 0;
}
