#include <iostream>
#include <map>
#include <algorithm>
#include <climits>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n, m;
    cin >> n >> m;
    map<ll, ll> map;

    ll a[n];
    ll sum = 0;
    ll min = LLONG_MAX;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
        map[a[i]]++;
    }
    rep(i, n)
    {
        min = sum - a[i];
    }

    return 0;
}