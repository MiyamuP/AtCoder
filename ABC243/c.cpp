#include <iostream>
#include <map>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	map<ll, ll> lmax;

	map<ll, ll> rmin;

	ll x[n];
	ll y[n];

	rep(i, n)
	{
		cin >> x[i] >> y[i];
		if (x[i] == 0)
		{
			x[i] = -1;
		}
	}

	char s[n];
	rep(i, n)
	{
		cin >> s[i];
		if (s[i] == 'R')
		{
			if (rmin[y[i]] == 0)
			{
				rmin[y[i]] = x[i];
			}
			if (rmin[y[i]] > x[i])
			{
				rmin[y[i]] = x[i];
			}
			if (lmax[y[i]] != 0 && lmax[y[i]] >= x[i])
			{
				cout << "Yes" << endl;
				return 0;
			}
		}

		if (s[i] == 'L')
		{
			if (lmax[y[i]] < x[i])
			{
				lmax[y[i]] = x[i];
			}
			if (rmin[y[i]] != 0 && rmin[y[i]] <= x[i])
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;

	return 0;
}