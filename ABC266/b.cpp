#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n;
	cin >> n;
	if (n > 0)
	{
		cout << n % 998244353 << endl;
	}
	else
	{
		ll t = abs(n) % 998244353;

		if (t != 0)
		{
			cout << 998244353 - t << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
	return 0;
}