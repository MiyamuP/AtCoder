#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n;
    cin >> n;
    ll a[n][n];
    ll b[n][n];
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> a[i][j];
        }
    }
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> b[i][j];
        }
    }
    rep(i, 4)
    {
        ll ta[n][n];
        ll f = true;
        rep(j, n)
        {
            rep(k, n)
            {
                ta[j][k] = a[n - k - 1][j];
            }
        }
        rep(j, n)
        {
            rep(k, n)
            {
                a[j][k] = ta[j][k];
                if (a[j][k] == 1 && b[j][k] != 1)
                {
                    f = false;
                }
            }
        }
        if (f)
        {
            // rep(j, n)
            // {
            //     rep(k, n)
            //     {
            //         cout << a[j][k] << ' ';
            //     }
            //     cout << endl;
            // }
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}