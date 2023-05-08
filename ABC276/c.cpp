#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    ll n;
    cin >> n;
    vector<ll> p(n);
    rep(i, n)
    {
        cin >> p[i];
    }
    prev_permutation(p.begin(), p.end());
    rep(i, n)
    {
        cout << p[i] << ' ';
    }
    cout << endl;
    return 0;
}