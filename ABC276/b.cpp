#include <iostream>
#include <set>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[m], b[m];
    set<ll> ans[n];
    rep(i, m)
    {
        cin >> a[i] >> b[i];
        ans[a[i] - 1].insert(b[i]);
        ans[b[i] - 1].insert(a[i]);
    }
    rep(i, n)
    {
        cout << ans[i].size() << ' ';

        for (auto itr = ans[i].begin(); itr != ans[i].end(); itr++)
        {
            cout << *itr << ' ';
        }

        cout << endl;
    }

    return 0;
}