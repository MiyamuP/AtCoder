#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    ll h, w;
    cin >> h >> w;
    char s[h][w];
    rep(i, h)
    {
        bool pf = false;
        rep(j, w)
        {
            cin >> s[i][j];
            if (s[i][j] == 'T')
            {
                if (!pf)
                {
                    pf = true;
                }
                else
                {
                    s[i][j - 1] = 'P';
                    s[i][j] = 'C';
                    pf = false;
                }
            }
            else
            {
                pf = false;
            }
        }
    }
    rep(i, h)
    {
        rep(j, w)
        {
            cout << s[i][j];
        }
        cout
            << endl;
    }

    return 0;
}