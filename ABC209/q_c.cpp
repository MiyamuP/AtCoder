#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll c[n];
    ll divn = 1000000007;
    ll num=1;
    for(ll i=0; i<n; i++) {
        cin>>c[i];
    }
    sort(c, c+n);
    for(ll i=0; i<n; i++) {
        num=(num*(c[i]-i))%divn;
    }
    cout<<num<<endl;
    return 0;
}