#include <iostream>
#include <string>
using namespace std;
#define ll long long
int main()
{
    ll k;
    string a, b;
    cin >> k >> a >> b;
    ll numa = 0;
    ll numb = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        numa = numa * k;
        numa += a[i] - '0';
        //cout << a[i] << endl;
        //cout << numa << endl;
    }

    for (ll i = 0; i < b.size(); i++)
    {
        numb = numb * k;
        numb += b[i] - '0';
        //cout << numa << endl;
    }
    cout << numa * numb << endl;
    return 0;
}