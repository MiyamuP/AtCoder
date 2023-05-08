#include <iostream>
#include <map>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, q;
	cin >> n >> q;
	ll x[q];

	ll b[n];
	rep(i, n)
	{
		b[i] = i;
	}
	map<ll, ll> m;
	rep(i, n)
	{
		m[i] = i;
	}

	rep(i, q)
	{
		ll x;
		cin >> x;
		if (m[x - 1] != n - 1)
		{
			ll tmp = b[m[x - 1] + 1];
			b[m[x - 1] + 1] = b[m[x - 1]];
			b[m[x - 1]] = tmp;
			m[x - 1]++;
			m[tmp]--;
		}
		else
		{
			ll tmp = b[m[x - 1] - 1];
			b[m[x - 1] - 1] = b[m[x - 1]];
			b[m[x - 1]] = tmp;
			m[x - 1]--;
			m[tmp]++;
		}
	}
	rep(i, n)
	{
		cout << b[i] + 1 << ' ';
	}
	cout << endl;
	return 0;
}