#include <iostream>
#include <queue>
using namespace std;
#define ll long long
int main() {
    ll n, m;
    cin>>n>>m;
    ll k[m];
    queue<ll> a[m];
    for(ll i=0; i<m; i++) {
        cin>>k[i];
        for(ll j=0; j<k[i]; j++) {
            ll tmp;
            cin>>tmp;
            a[i].push(tmp);
        }
    }

    for(ll i=0; i<m; i++) {
        for(ll j=0; j<m; j++) {
            ll tmpi=a[i].front();
            ll tmpj=a[j].front();
            if(tmpi==tmpj && i!=j) {
                a[i].pop();
                a[j].pop();
            }
        }
    }
    return 0;
}