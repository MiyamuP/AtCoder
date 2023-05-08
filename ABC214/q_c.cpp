#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll s[n], t[n], a[n];
    for(ll i=0; i<n; i++) {
        a[i]=__LONG_LONG_MAX__;
    }
    ll next=__LONG_LONG_MAX__;
    for(ll i=0; i<n; i++) {
        cin>>s[i];
    }

    for(ll i=0; i<n; i++) {
        cin>>t[i];
    }

    for(ll i=0; i<n*2; i++) {
        if(next>t[i%n]) {
            if(a[i%n]>t[i%n]) a[i%n]=t[i%n];
            next=s[i%n]+t[i%n];
        } else {
            if(a[i%n]>next) a[i%n]=next;
            next=next+s[i%n];
        }
    }

    for(ll i=0; i<n; i++) {
        cout<<a[i]<<endl;
    }
    return 0;
}