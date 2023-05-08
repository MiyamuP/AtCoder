#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define ll long long
struct Edge {
    ll to;
    ll cost;
};

using Graph = vector<vector<Edge> >;

int main() {
    ll n;
    cin>>n;
    //ll u[n], v[n], w[n];
    Graph G(n);
    for(ll i=0; i<n-1; i++) {
        ll u, v, w;
        cin>>u>>v>>w;
        Edge e;
        e.cost=w;
        e.to=v;
        G[u].push_back(e);
        e.to=u;
        G[v].push_back(e);
    }
    ll cost_sum=0;

    for(ll i=0; i<n-1; i++) {
        vector<ll> dist(n, -1);
        //vector<ll> cost_sum(n, 0);
        queue<ll> que;

        dist[i]=0;
        que.push(i);

        while(!que.empty()) {
            ll v=que.front();
            que.pop();

            for(ll i=0; i<G[v].size(); i++) {
                if(dist[G[v][i].to] != -1) continue;

                dist[G[v][i].to] = dist[v]+1;
                cost_sum += G[v][i].cost;
                que.push(G[v][i].to);
            }
        }
        return 0;
    }
}