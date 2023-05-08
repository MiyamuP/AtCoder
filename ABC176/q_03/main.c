//
//  main.c
//  q_03
//
//  Created by k19104kk on 2020/08/22.
//  Copyright © 2020 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long n;
    scanf("%lld", &n);
    
    long long a[n];
    
    for (int i=0; i<n; i++) {
        scanf("%lld", &a[i]);
    }
    
    long long sum=0;
    
    for (int i=0; i<n; i++) {
        if (i>=1) {
            if (a[i-1]>a[i]) {
                sum+=a[i-1]-a[i];
                a[i]=a[i-1];
            }
        }
    }
    
    printf("%lld\n", sum);
    
    
    
    return 0;
}
