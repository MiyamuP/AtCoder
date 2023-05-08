#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll x;
    cin >> x;
    ll num = 0;
    num += (x / sum) * n;
    ll am = x % sum;
    ll anum = 0;
    ll i = 0;
    while (am >= anum)
    {
        anum += a[i];
        num++;
        i++;
    }
    cout << num << endl;
    return 0;
}