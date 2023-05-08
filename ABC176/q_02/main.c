//
//  main.c
//  q_02
//
//  Created by k19104kk on 2020/08/22.
//  Copyright © 2020 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char n[200001];
    
    scanf("%s", n);
    
    
    int count = 0;
    long long sum = 0;
    while (n[count] != '\0') {
        sum += n[count] - '0';
        count++;
    }
    if (sum % 9 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
