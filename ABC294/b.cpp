#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll h, w;
    cin >> h >> w;
    ll a[h][w];
    ll s[h][w];
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                cout << '.';
            }
            else
            {
                char s = 'A' + a[i][j] - 1;
                cout << s;
            }
        }
        cout << endl;
    }
    return 0;
}