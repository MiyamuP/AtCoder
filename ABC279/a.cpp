#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    string s;
    cin >> s;
    ll num = 0;
    rep(i, s.length())
    {
        if (s[i] == 'v')
        {
            num++;
        }
        else if (s[i] == 'w')
        {
            num += 2;
        }
    }
    cout << num << endl;
    return 0;
}