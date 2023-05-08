#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    string s;
    cin >> s;
    bool f = true;
    ll firstB = -1;
    ll firstR = -1;
    ll kF = false;

    rep(i, s.length())
    {

        if (firstB >= 0 && s[i] == 'B')
        {
            if ((i - firstB) % 2 == 0)
                f = false;
        }
        if (firstB < 0 && s[i] == 'B')
        {
            firstB = i;
        }

        if (firstR >= 0 && s[i] == 'K')
            kF = true;
        if (firstR >= 0 && !kF && s[i] == 'R')
            f = false;
        if (firstR < 0 && s[i] == 'R')
        {
            firstR = i;
        }
    }
    if (f)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}