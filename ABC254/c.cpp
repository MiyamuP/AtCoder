#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, k;
	cin >> n >> k;
	multiset<ll> a[k];
	rep(i, n)
	{
		ll nu;
		cin >> nu;
		a[i % k].insert(nu);
	}

	multiset<ll>::iterator it[k];
	rep(i, k)
	{
		it[i] = a[i].begin();
	}

	rep(i, n - 1)
	{
		if (*it[i % k] > *it[(i + 1) % k])
		{
			cout << "No" << endl;
			return 0;
		}
		it[i % k]++;
	}
	cout << "Yes" << endl;

	return 0;
}