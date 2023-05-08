#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll s, t;
    cin>>s>>t;
    int cnt=0;
    for(ll i=0; i<=100; i++) {
        for(ll j=0; j<=100; j++) {
            for(ll k=0; k<=100; k++) {
                if(i+j+k<=s && i*j*k<=t) cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}