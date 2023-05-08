#include <stdio.h>

int main(int argc, const char * argv[]) {
    char S[3];
    scanf("%s", S);
    
    int num = 0;
    int sf = 0;
    for (int i=0; i<3; i++) {
        
        if (sf == 1) {
            if (S[i] == 'R') {
                num++;
            } else {
                sf = 0;
            }
        }
        
        if (sf == 0) {
            if (S[i] == 'R') {
                num = 1;
                sf = 1;
            }
        }
        
        
    }
    
    printf("%d\n", num);
    return 0;
}
