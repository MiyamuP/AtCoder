#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll h, w;
    cin >> h >> w;
    ll n[w];
    rep(i, w)
    {
        n[i] = 0;
    }
    char c[h][w];
    rep(y, h)
    {
        rep(x, w)
        {
            cin >> c[y][x];
            if (c[y][x] == '#')
                n[x]++;
        }
    }

    rep(x, w)
    {
        cout << n[x] << ' ';
    }
    cout << endl;
    return 0;
}