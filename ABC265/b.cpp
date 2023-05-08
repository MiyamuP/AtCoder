#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, m, t;
	cin >> n >> m >> t;
	ll a[n - 1];
	rep(i, n - 1)
	{
		cin >> a[i];
	}
	vector<ll> b(n, 0);
	rep(i, m)
	{
		ll x, y;
		cin >> x >> y;
		b[x - 1] = y;
	}
	rep(i, n - 1)
	{
		t += b[i];
		t -= a[i];
		// cout << t << endl;
		if (t <= 0)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
