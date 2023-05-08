#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    ll r, c;
    cin >> r >> c;
    char b[r][c];
    rep(i, r)
    {
        rep(j, c)
        {
            cin >> b[i][j];
        }
    }
    return 0;
}