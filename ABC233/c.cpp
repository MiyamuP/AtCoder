#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, x;
	cin >> n >> x;
	ll l[n];

	map<ll, ll> current;
	current.insert(make_pair(x, 1));
	map<ll, ll> next;

	rep(i, n)
	{
		ll l;
		cin >> l;

		map<ll, ll> next;

		vector<ll> a(l);
		rep(j, l)
		{
			cin >> a[j];
			for (auto itr = current.begin(); itr != current.end(); itr++)
			{
				if (itr->first % a[j] == 0)
				{
					next[itr->first / a[j]] += itr->second;
				}
			}
		}

		current = next;
	}

	ll ans = 0;

	for (auto itr = current.begin(); itr != current.end(); itr++)
	{
		if (itr->first == 1)
		{
			ans += itr->second;
		}
	}
	cout << ans << endl;
	return 0;
}