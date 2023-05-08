#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

struct UnionFind
{
	vector<ll> par;

	UnionFind(ll N) : par(N)
	{
		rep(i, N) par[i] = i;
	}

	ll root(ll x)
	{
		if (par[x] == x)
			return x;
		return par[x] = root(par[x]);
	}

	void unite(ll x, ll y)
	{
		ll rx = root(x);
		ll ry = root(y);
		if (rx == ry)
			return;
		par[rx] = ry;
	}

	bool same(ll x, ll y)
	{
		ll rx = root(x);
		ll ry = root(y);
		return rx == ry;
	}
};

int main()
{
	ll n, m;
	cin >> n >> m;
	UnionFind uft(n + 1);

	vector<ll> nn(n + 1, 0);

	bool f = true;

	rep(i, m)
	{
		ll a, b;
		cin >> a >> b;
		nn[a]++;
		nn[b]++;

		if (nn[a] > 2 || nn[b] > 2)
			f = false;

		if (uft.root(a) == uft.root(b))
			f = false;

		uft.unite(a, b);
	}

	if (f)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}