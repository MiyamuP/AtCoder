#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll d = 998244353;
	ll n;
	cin >> n;
	ll rem[n + 1][n];
	rep(i, n + 1)
	{
		rep(j, n)
		{
			rem[i][j] = 0;
		}
	}
	ll sum = n;

	rep(i, n)
	{
		ll a;
		cin >> a;
		for (ll j = 2; j <= 100; j++)
		{
			rem[j][a % j]++;
		}
	}
	for (ll i = 2; i <= 100; i++)
	{
		ll fn = rem[i][0];
		if (fn >= 2)
		{
			sum = sum+pow(fn;
		}
	}

	return 0;
}