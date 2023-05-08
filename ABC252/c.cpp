#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n;
	cin >> n;
	string s[n];
	rep(i, n)
	{
		cin >> s[i];
	}
	ll nmin = 10000000;
	ll in;
	rep(i, 10)
	{
		vector<ll> nf(10, 0);
		ll num = 0;
		ll nmax = 0;

		rep(j, n)
		{
			rep(k, 10)
			{
				if (s[j][k] - '0' == i)
				{
					nf[k]++;
					nmax = max(nmax, k);
				}
			}
		}
		ll nfmax = 1;
		rep(j, 10)
		{
			if (nfmax <= nf[j])
			{
				nfmax = nf[j];
				nmax = j;
			}
		}
		if (nmin > 10 * (nfmax - 1) + nmax)
		{
			nmin = 10 * (nfmax - 1) + nmax;
			// in = i;
		}
	}
	cout << nmin << endl;
	// cout << in << endl;
	return 0;
}