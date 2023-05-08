#include <iostream>
#include <map>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

struct UnionFind
{
    map<ll, ll> par;

    void insert(ll x)
    {
        par[x] = x;
    }
    ll root(ll x)
    {
        if (par[x] == x)
            return x;
        return par[x] = root(par[x]);
    }

    void unite(ll x, ll y)
    {
        ll rx = root(x);
        ll ry = root(y);
        if (rx == ry)
            return;
        if (rx > ry)
        {
            par[ry] = rx;
        }
        else
        {
            par[rx] = ry;
        }
    }
    bool same(ll x, ll y)
    {
        ll rx = root(x);
        ll ry = root(y);
        return rx == ry;
    }
};
int main()
{
    UnionFind tree;
    ll n;
    cin >> n;
    ll a[n], b[n];
    rep(i, n)
    {
        cin >> a[i] >> b[i];
        tree.insert(a[i]);
        tree.insert(b[i]);
    }
    rep(i, n)
    {
        tree.unite(a[i], b[i]);
    }
    ll ans = tree.root(1);
    if (ans)
    {
        cout << tree.root(1) << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}