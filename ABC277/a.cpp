#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n, x;
    cin >> n >> x;
    ll p[n];
    rep(i, n)
    {
        cin >> p[i];
        if (p[i] == x)
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}