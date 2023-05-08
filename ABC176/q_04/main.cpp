//
//  main.cpp
//  q_04
//
//  Created by k19104kk on 2020/08/22.
//  Copyright © 2020 AIT. All rights reserved.
//

#include <iostream>
#include <queue>

typedef struct q_vec {
    int y;
    int x;
    int dis;
} Q_vec;

int main(int argc, const char * argv[]) {
    int h = 0, w = 0;
    scanf("%d %d", &h, &w);
    int ch, cw;
    scanf("%d %d", &ch, &cw);
    int dh, dw;
    scanf("%d %d", &dh, &dw);
    
    char s[h][w];
    
    for (int y=0; y<h; y++) {
        for (int x=0; x<w; x++) {
            scanf("%c", &s[h][w]);
        }
    }
    
    std::queue<Q_vec> q;
    
    Q_vec start = {cw, ch, 0};
    
    q.emplace(start);
    
    int y_vec[] = {0, -1, 0, 1};
    int x_vec[] = {-1, 0, 1, 0};
    
    int dis = 0;
    
    while (true) {
        while (!q.empty()) {
            Q_vec q_now = q.front();
            q.pop();
            
            int q_y = q_now.y;
            int q_x = q_now.x;
            int q_dis = q_now.dis;
            
            if (q_y == dh && q_x == dw) {
                printf("%d", dis);
                return 0;
            }
            
            for (int i=0; i<4; i++) {
                for (int i = 0; i < 8; i++) {
                    Q_vec q_next = {q_y + y_vec[i], q_x + x_vec[i], q_dis+1};
                    
                    if (s[q_next.y][q_next.x] == '.') {
                        q.push(q_next);
                    }
                }
            }
        }
        
        
    }
    
    return 0;
}
