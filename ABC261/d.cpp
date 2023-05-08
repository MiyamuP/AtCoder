#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n, m;
	cin >> n >> m;
	ll x[n];
	rep(i, n)
	{
		cin >> x[i];
	}
	ll c[n], y[n];
	rep(i, m)
	{
		cin >> c[i] >> y[i];
	}
	return 0;
}