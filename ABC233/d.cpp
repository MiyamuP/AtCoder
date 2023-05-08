#include <iostream>
#include <map>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, k;
	cin >> n >> k;
	ll a[n];
	ll ans = 0;
	ll sum = 0;
	map<ll, ll> m;

	m.insert(make_pair(0, 1));

	rep(i, n)
	{
		cin >> a[i];
		sum += a[i];
		if (m.find(sum - k) != m.end())
		{
			ans += m[sum - k];
		}

		m[sum]++;
	}

	cout << ans << endl;

	return 0;
}