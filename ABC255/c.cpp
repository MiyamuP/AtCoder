#include <iostream>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll x, a, d, n;
	cin >> x >> a >> d >> n;
	ll nmax, nmin;

	if (d >= 0)
	{
		nmax = a + d * (n - 1);
		nmin = a;
	}
	else
	{
		nmax = a;
		nmin = a + d * (n - 1);
	}

	if (x >= nmax)
	{
		cout << abs(x - nmax) << endl;
	}
	else if (x <= nmin)
	{
		cout << abs(x - nmin) << endl;
	}
	else
	{
		ll tnum = (x - a) / d;
		ll ans = min(abs((x - a) - tnum * d), min(abs((x - a) - (tnum + 1) * d), abs((x - a) - (tnum - 1 * d))));
		cout << ans << endl;
	}

	return 0;
}