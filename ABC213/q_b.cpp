#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll a[n];
    ll min=0;
    ll min_i=-1;
    ll minb=0;
    ll minb_i=-1;
    for(ll i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]>minb) {
            minb=a[i];
            minb_i=i;
        }
        if(minb>min) {
            ll tmp=min;
            ll tmpi=min_i;
            min=minb;
            min_i=minb_i;
            minb=tmp;
            minb_i=tmpi;
        }
    }

    cout<<minb_i+1<<endl;
    return 0;
}