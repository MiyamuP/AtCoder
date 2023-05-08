//
//  main.c
//  q_04
//
//  Created by k19104kk on 2020/08/22.
//  Copyright © 2020 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int h, w;
    scanf("%d %d", h, w);
    int ch, cw;
    scanf("%d %d", ch, cw);
    int dh, dw;
    scanf("%d %d", dh, dw);
    
    char s[h][w];
    
    for (int y=0; y<h; y++) {
        for (int x=0; x<w; x++) {
            scanf("%c", &s[h][w]);
        }
    }
    
    
    return 0;
}
