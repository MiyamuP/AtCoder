#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void func(ll *num, ll index, ll t[], ll k[], vector<vector<ll> > a)
{
	(*num) += t[index - 1];
	if (k[index - 1] > 0)
	{
		for (ll i = 0; i < a[index - 1].size(); i++)
		{
			func(num, a[index-1][i], t, k, a);
		}
	}
}
int main()
{
	ll n;
	cin >> n;
	ll t[n], k[n];
	vector<vector<ll> > a(n);
	ll sum = 0;

	for (ll i = 0; i < n; i++)
	{
		cin >> t[i] >> k[i];
		for (ll j = 0; j < k[i]; j++)
		{
			ll ina;
			cin >> ina;
			a[i].push_back(ina);
		}
	}
	func(&sum, n, t, k, a);
	cout<<sum<<endl;

	return 0;
}