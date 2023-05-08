#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

ll f(ll t)
{
	return pow(t, 2) + 2 * t + 3;
}

int main()
{
	ll t;
	cin >> t;
	ll ans = f(f(f(t) + t) + f(f(t)));
	cout << ans << endl;
	return 0;
}