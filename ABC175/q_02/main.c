#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int N;
    int L[100];
    
    scanf("%d", &N);
    
    for (int i=0; i<N; i++) {
        scanf("%d", &L[i]);
    }
    
    
    
    int num=0;
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            for (int k=0; k<N; k++) {
                if (L[i]+L[j]>L[k] && L[j]+L[k]>L[i] && L[i]+L[k]>L[j] && L[i]!=L[j] && L[j]!=L[k] && L[i]!=L[k]) {
                    num++;
                }
            }
        }
    }
    
    printf("%d\n", num);
    
    return 0;
}
