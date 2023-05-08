#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    long long numl[200001];

    for(long long i=0; i<200001; i++) {
        numl[i]=i;
    }

    long long f=n/2;
    long long num=0;

    for(long long i=0; i<f; i++) {
        if(a[i] != numl[a[i]]) {
            a[i]=numl[a[i]];
            continue;
        }
        if(a[n-i-1] != numl[a[n-i-1]]) {
            a[n-i-1]=numl[a[n-i-1]];
            continue;
        }
        if(a[i] != a[n-i-1]) {
            num=num+1;
            numl[max(a[i], a[n-i-1])] = min(a[i], a[n-i-1]);
        }
    }
    cout<<num<<endl;
    return 0;
}