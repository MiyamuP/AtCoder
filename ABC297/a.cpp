#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    ll n, d;
    cin >> n >> d;
    ll t[n];
    ll time = -1;
    rep(i, n)
    {
        cin >> t[i];
        if (i)
        {
            if (t[i] - t[i - 1] <= d)
            {
                time = t[i];
                break;
            }
        }
    }
    cout << time << endl;
    return 0;
}
