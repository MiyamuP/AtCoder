#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, k;
	cin >> n >> k;
	ll a[k];
	rep(i, k)
	{
		cin >> a[i];
	}
	ll x[n], y[n];

	rep(i, n)
	{
		cin >> x[i] >> y[i];
	}

	ll nmax = 0;

	rep(i, n)
	{
		// rep(j, n)
		//{
		ll dismin = 1000000000000;
		rep(l, k)
		{
			dismin = min(dismin, (x[a[l] - 1] - x[i]) * (x[a[l] - 1] - x[i]) + (y[a[l] - 1] - y[i]) * (y[a[l] - 1] - y[i]));
		}
		nmax = max(dismin, nmax);
		//}
	}
	double ans = (double)sqrt((double)nmax);
	// cout << nmax << endl;
	cout << fixed << setprecision(15) << ans << endl;
	return 0;
}