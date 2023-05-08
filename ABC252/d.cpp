#include <iostream>
#include <map>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n;
	cin >> n;
	ll a[n];
	map<ll, ll> nn;
	map<ll, ll> na;
	rep(i, n)
	{
		cin >> a[i];
		nn[a[i]]++;
	}

	ll ns = nn.size();
	ll num = ns * (ns - 1) * (ns - 2) / 6;
	ll t = num;

	for (auto itr = nn.begin(); itr != nn.end(); itr++)
	{
		na[itr->second]++;
	}

	for (auto itr = na.begin(); itr != na.end(); itr++)
	{
		if (itr->first != 1)
			num *= itr->first * itr->second;
	}

	cout << num << endl;

	return 0;
}