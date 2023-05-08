#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n, k, d;
    cin >> n >> k >> d;
    ll dp[k][d];
    bool f[k][d][n];
    rep(i1, k)
    {
        rep(i2, d)
        {
            dp[i1][i2] = 0;
            rep(i3, n)
            {
                f[i1][i2][i3] = true;
            }
        }
    }
    vector<ll> a(n);
    ll smax = 0;
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<ll>());
    rep(i1, k)
    {
        rep(i2, d)
        {
            rep(i3, n)
            {
                if (f[i1][i2][i3])
                    if (dp[i1 + 1][(i2 + a[i3] % d) % d] < dp[i1][(i2 + a[i3] % d) % d] + a[i3])
                    {
                        dp[i1 + 1][(i2 + a[i3] % d) % d] = dp[i1][(i2 + a[i3] % d) % d] + a[i3];
                        f[i1][i2][i3] = false;
                        if (i1 + 1 == d && (i2 + a[i3] % d) % d == 0)
                        {
                            smax = max(smax, dp[i1 + 1][(i2 + a[i3] % d) % d]);
                        }
                    }
            }
        }
    }
    if (smax == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << smax << endl;
    }
    return 0;
}