#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    long long ncnt[200];
    for(long long i=0; i<200; i++) {
        ncnt[i]=0;
    }
    
    long long num=0;
    for(long long i=0; i<n; i++) {
        if(a[i]>=100) {
            long long ttmp=a[i]%1000;
            long long htmp=a[i]%100;
            if(((ttmp-htmp)/100)%2 == 0) {
                ncnt[htmp]++;
            } else {
                ncnt[htmp+100]++;
            }
        } else {
            ncnt[a[i]]++;
        }
    }
    for(long long i=0; i<200; i++) {
        if(ncnt[i]!=0) {
            num=num+(ncnt[i]-1)*(1+ncnt[i]-1)/2;
        }
    }
    cout<<num<<endl;
    return 0;
}