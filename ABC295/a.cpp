#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    ll n;
    cin >> n;
    string w[n];
    rep(i, n)
    {
        cin >> w[i];
        if (w[i].compare("and") == 0 || w[i].compare("not") == 0 || w[i].compare("that") == 0 || w[i].compare("the") == 0 || w[i].compare("you") == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}