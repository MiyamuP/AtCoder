#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}