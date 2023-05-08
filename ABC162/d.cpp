#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	string s;
	cin >> n >> s;
	ll num = 0;
	vector<ll> r, g;
	vector<bool> b(8010, false);
	ll bn = 0;
	rep(i, n)
	{
		switch (s[i])
		{
		case 'R':
			r.push_back(i);
			break;

		case 'G':
			g.push_back(i);
			break;

		case 'B':
			b[i] = true;
			bn++;
			break;
		}
	}

	for (auto rn : r)
	{
		for (auto gn : g)
		{

			ll dis = abs(rn - gn);

			if (min(gn, rn) - dis >= 0)
			{
				// cout << max(rn, gn) + dis << endl;
				if (b[max(rn, gn) + dis])
					num -= 1;
				if (b[min(rn, gn) - dis])
					num -= 1;
				if ((b[(rn + gn) / 2] && ((rn + gn) % 2) == 0))
					num -= 1;

				num += bn;
			}
			else
			{
				if (b[max(rn, gn) + dis])
					num -= 1;
				if ((b[(rn + gn) / 2] && ((rn + gn) % 2) == 0))
					num -= 1;

				num += bn;
			}
		}
	}
	cout << num << endl;
	return 0;
}