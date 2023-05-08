#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    long long X, K, D;
    scanf("%lld %lld %lld", &X, &K, &D);
    
    if (D == 0) {
        printf("%lld", X);
        return 0;
    }
    
    int xd = sqrt(pow(X/D, 2));
    
    if (K<xd) {
        if (sqrt(pow(X-D, 2)) > sqrt(pow(X+D, 2))) {
            X = X+D*K;
        } else {
            X = X-D*K;
        }
    }
    
    for (int i=0; i<xd; i++) {
        if (sqrt(pow(X-D, 2)) > sqrt(pow(X+D, 2))) {
            X = X+D;
        } else {
            X = X-D;
        }
    }
    
    long long LX = sqrt(pow(X, 2));
    
    printf("%lld\n", LX);
    return 0;
}
