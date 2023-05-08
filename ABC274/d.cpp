#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    vector<ll> ax, ay;

    for (ll i = 0; i < n; i += 2)
    {
        ax.push_back(a[i]);
    }
    for (ll i = 1; i < n; i += 2)
    {
        ay.push_back(a[i]);
    }
    ll dpx[ax.size()][20000];
    ll dpy[ay.size()][20000];
    rep(i, ax.size())
    {
        rep(j, 20000)
        {
            dpx[i][j] = false;
        }
    }
    rep(i, ay.size())
    {
        rep(j, 20000)
        {
            dpy[i][j] = false;
        }
    }
    dpx[0][10000 + ax[0]] = true;
    bool fx = false;
    rep(i, ax.size())
    {
        rep(j, 20000)
        {
            if (dpx[i][j] && i < ax.size() - 1)
            {
                dpx[i + 1][j + ax[i + 1]] = true;
                dpx[i + 1][j - ax[i + 1]] = true;
            }
            else if (dpx[i][j] && i == ax.size() - 1)
            {
                if (j - 10000 == x)
                {
                    fx = true;
                    break;
                }
            }
        }
    }

    dpy[0][10000 + ay[0]] = true;
    dpy[0][10000 - ay[0]] = true;
    bool fy = false;
    rep(i, ay.size())
    {
        rep(j, 20000)
        {
            if (dpy[i][j] && i < ay.size() - 1)
            {
                dpy[i + 1][j + ay[i + 1]] = true;
                dpy[i + 1][j - ay[i + 1]] = true;
            }
            else if (dpy[i][j] && i == ay.size() - 1)
            {
                if (j - 10000 == y)
                {
                    fy = true;
                    break;
                }
            }
        }
    }
    if (fx && fy)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}