#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    vector<ll> ab(n + m);
    map<ll, ll> abm;
    rep(i, n)
    {
        cin >> a[i];
        ab[i] = a[i];
    }
    rep(i, m)
    {
        cin >> b[i];
        ab[n + i] = b[i];
    }

    sort(ab.begin(), ab.end());
    rep(i, n + m)
    {
        abm[ab[i]] = i + 1;
    }
    rep(i, n)
    {
        cout << abm[a[i]] << ' ';
    }
    cout << endl;
    rep(i, m)
    {
        cout << abm[b[i]] << ' ';
    }

    cout << endl;

    return 0;
}