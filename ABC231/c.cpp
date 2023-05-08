#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n, q;
	cin >> n >> q;
	vector<ll> a(n);

	rep(i, n)
	{
		ll in;
		cin >> in;
		a[i] = in;
	}
	sort(a.begin(), a.end());
	ll x[q];
	rep(i, q)
	{
		ll f = false;
		ll num = 0;
		cin >> x[i];

		auto itr = lower_bound(a.begin(), a.end(), x[i]);

		num = n - (itr - a.begin());
		cout << num << endl;
	}

	return 0;
}