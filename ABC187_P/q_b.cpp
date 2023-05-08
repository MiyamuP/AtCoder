#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll n;
    ll x;
    cin>>n>>x;
    ll v[n];
    ll p[n];
    ll num=0;
    ll cnum=0;
    for(ll i=0; i<n; i++) {
        cin>>v[i]>>p[i];
    }

    for(ll i=0; i<n; i++) {
        num+= (v[i]*p[i]);
        cnum++;
        if(num>x*100) {
            break;
        }
    }


    if(num<=x*100) {
        cout<<"-1"<<endl;
    } else {
        cout<<cnum<<endl;
    }
    
    return 0;
}