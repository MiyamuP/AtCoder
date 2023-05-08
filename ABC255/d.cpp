#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, q;
	cin >> n >> q;
	vector<ll> a;
	map<ll, ll> misuml;
	map<ll, ll> masuml;
	ll x[q];
	rep(i, n)
	{
		ll ain;
		cin >> ain;
		a.push_back(ain);
	}
	sort(a.begin(), a.end());
	ll minn = a[0];
	ll maxn = a[n - 1];

	ll misum = 0;
	rep(i, n)
	{
		misum += a[i];
		misuml[a[i]] = misum;
	}
	ll masum = 0;
	for (ll i = n - 1; i >= 0; i--)
	{
		masum += a[i];
		masuml[a[i]] = masum;
	}
	ll ans = 0;
	rep(i, q)
	{
		cin >> x[i];
		auto ma = misuml.rbegin();
		auto mi = misuml.begin();
		if (x[i] > maxn)
		{
			ans = x[i] * n - ma->second;
		}
		else if (x[i] < minn)
		{
			ans = ma->second - x[i] * n;
		}
		else
		{
			auto lit = lower_bound(a.begin(), a.end(), x[i]);
			if (lit != a.begin())
			{
				lit--;
				ll dis = distance(a.begin(), lit);
				ans += x[i] * dis - misuml[*lit];
			}
			auto uit = lower_bound(a.begin(), a.end(), x[i]);
			if (*uit != x[i])
				uit--;

			ll dis = distance(uit, --a.end());
			ans += misuml[maxn] - misuml[*uit] - x[i] * dis;
		}
		cout << ans << endl;
	}
	return 0;
}