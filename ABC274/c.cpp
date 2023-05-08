#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    ll an = 2 * n + 1;
    ll sum[an + 1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i <= an; i++)
    {
        sum[i] = 0;
    }
    for (ll i = 1; i <= n; i++)
    {
        sum[i * 2] += sum[a[i]] + 1;
        sum[i * 2 + 1] += sum[a[i]] + 1;
    }

    for (ll i = 1; i <= an; i++)
    {
        cout << sum[i] << endl;
    }
    return 0;
}