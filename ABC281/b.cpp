#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    string s;
    cin >> s;
    if (!(s[0] >= 'A' && s[0] <= 'Z' && s[s.size() - 1] >= 'A' && s[s.size() - 1] <= 'Z'))
    {
        cout << "No" << endl;
        return 0;
    }
    ll num = 0;
    for (ll i = 1; i < s.size() - 1; i++)
    {
        if (s[1] == '0')
        {
            cout << "No" << endl;
            return 0;
        }
        if (!(s[i] >= '0' && s[i] <= '9'))
        {
            cout << "No" << endl;
            return 0;
        }
        num++;
    }
    if (num >= 6)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}