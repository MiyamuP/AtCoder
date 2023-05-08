#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll q;
    cin >> q;
    ll s = 1;
    rep(in, q)
    {
        ll qu;
        cin >> qu;
        ll x;
        string tmp;
        ll tnum;
        ll rui = 1;
        switch (qu)
        {
        case 1:
            cin >> x;
            s = s * 10 + x;
            break;
        case 2:
            tnum = s;
            while (s >= 10)
            {
                s /= 10;
                rui *= 10;
            }
            s = tnum - s * rui;

            break;
        case 3:
            s = s % (ll)998244353;
            cout << s << endl;
            break;

        default:
            break;
        }
    }
    return 0;
}