#include <iostream>
#include <vector>
#define ll long long
using namespace std;
using Graph = vector<vector<ll>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;

    for(auto nexv : G[v]) {
        if(seen[next_v]) continue;
        dfs(G, next_v);
    }
}
int main() {
    ll n, q;
    cin>>n>>q;
    ll a[n], b[n], c[q], d[q];
    for(ll i=0; i<n; i++) {
        cin>>a[i]>>b[i];
    }
    for(ll i=0; i<q; i++) {
        cin>>c[i]>>d[i];
    }

    return 0;
}