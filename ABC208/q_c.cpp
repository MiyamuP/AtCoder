#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    long long n, k;
    cin>>n>>k;
    long long a[n];
    map<long long, long long> p;
    long long t[n];
    long long num=k/n;
    long long rem=k%n;
    for(long long i; i<n; i++) {
        cin>>a[i];
        p.insert(make_pair(a[i], num));
        t[i] = a[i];
    }
    
    sort(a, a+n);

    for(long long i=0; i<rem; i++) {
        p[a[i]]++;
    }
    
    for(long long i=0; i<n; i++) {
        cout<<p[t[i]]<<endl;
    }

    return 0;
}