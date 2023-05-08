#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n;
    cin >> n;
    char c[n];
    bool of = false;
    rep(i, n)
    {
        cin >> c[i];
        switch (c[i])
        {
        case 'o':
            of = true;
            break;
        case 'x':
            cout << "No" << endl;
            return 0;
            break;

        default:
            break;
        }
    }
    if (of)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}