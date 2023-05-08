#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n;
    cin >> n;
    string s[n];
    rep(i, n)
    {
        cin >> s[i];
    }
    rep(i, n)
    {
        if (!((s[i][0] == 'H' || s[i][0] == 'D' || s[i][0] == 'C' || s[i][0] == 'S') && (s[i][1] == 'A' || s[i][1] == '2' || s[i][1] == '3' || s[i][1] == '4' || s[i][1] == '5' || s[i][1] == '6' || s[i][1] == '7' || s[i][1] == '8' || s[i][1] == '9' || s[i][1] == 'T' || s[i][1] == 'J' || s[i][1] == 'Q' || s[i][1] == 'K')))
        {
            cout << "No" << endl;
            return 0;
        }
        rep(j, n)
        {
            if (i != j && s[i][0] == s[j][0] && s[i][1] == s[j][1])
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}