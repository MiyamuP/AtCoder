#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    ll ans = 0;
    sort(a.begin(), a.end());
    for (ll i = 1; i < n; i++)
    {
        if (a[0] < a[i])
        {
            if (a[i] % 2 == 0)
            {
                a[i] /= 2;
                if (a[0] > a[i])
            }
        }
    }
    return 0;
}