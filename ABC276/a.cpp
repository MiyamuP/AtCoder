#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    string s;
    cin >> s;
    ll an = -1;
    for (ll i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'a')
        {
            an = i + 1;
            break;
        }
    }
    cout << an << endl;
    return 0;
}