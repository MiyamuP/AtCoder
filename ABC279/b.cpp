#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    string s, t;
    cin >> s >> t;
    auto pos = s.find(t);
    if (pos == string::npos)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}