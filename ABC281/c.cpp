#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n, t;
    cin >> n >> t;
    ll a[n];
    ll sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll num = t % sum;
    ll in = 0;
    while (num - a[in] > 0)
    {
        num -= a[in];
        in++;
    }
    cout << in + 1 << ' ' << num << endl;
    return 0;
}