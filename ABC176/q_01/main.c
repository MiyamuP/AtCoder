//
//  main.c
//  q_01
//
//  Created by k19104kk on 2020/08/22.
//  Copyright © 2020 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, x, t;
    
    scanf("%d %d %d", &n, &x, &t);
    
    if (n%x != 0) {
        printf("%d\n", (n/x+1)*t);
    } else {
        printf("%d\n", (n/x)*t);
    }
    
}
