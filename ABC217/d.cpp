#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    ll l, q;
    cin>>l>>q;
    vector<ll> nd;
    ll c[q], x[q];
    ll num=0;
    nd.push_back(0);
    nd.push_back(l-1);
    for(ll i=0; i<q; i++) {
        cin>>c[i]>>x[i];
        if(c[i]==1) {
            nd.push_back(x[i]);
            sort(nd.begin(), nd.end());
        }
        
    }
    return 0;
}