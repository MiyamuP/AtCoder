#include <iostream>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n = pow(2, 20);
	vector<ll> a(n, -1);
	vector<bool> f(n, false);
	vector<ll> pn(n, 0);
	ll q;
	cin >> q;
	// map<ll, ll> m;
	rep(i, q)
	{
		ll t, x;
		cin >> t >> x;
		if (t == 1)
		{
			ll h = x;
			ll start = h % n;
			ll ind = start;
			ll num = 0;

			while (1)
			{
				if (a[ind] != -1)
				{
					if (f[ind])
					{
						ind = pn[ind];
					}
					else
					{
						ind++;
					}

					if (ind == n)
					{
						ind = 0;
					}
				}
				else
				{
					a[ind] = x;
					f[start] = true;
					pn[start] = ((ind % n) + 1) % n;
					break;
				}
			}
		}
		else
		{
			cout << a[x % n] << endl;
		}
	}
	return 0;
}