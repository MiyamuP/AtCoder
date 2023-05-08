#include <bits/stdc++.h>
#include <atcoder/dsu>

using namespace std;
using namespace atcoder;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, m;
	cin >> n >> m;
	vector<vector<ll>> v(n + 1);
	dsu d(n + 1);
	rep(i, m)
	{
		ll a, b;
		cin >> a >> b;
		v[a].push_back(b);
	}

	ll num = 0;

	vector<ll> ans = {0};

	for (ll i = n; i >= 2; i--)
	{
		num++;
		for (ll j : v[i])
		{
			if (!d.same(i, j))
			{
				d.merge(i, j);
				num--;
			}
		}
		ans.push_back(num);
	}

	reverse(ans.begin(), ans.end());
	for (ll i : ans)
	{
		cout << i << endl;
	}
	return 0;
}