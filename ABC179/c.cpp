#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

vector<ll> smallest_prime_factor(ll n)
{
	vector<ll> spf(n + 1);
	for (ll i = 0; i <= n; i++)
		spf[i] = i;
	for (ll i = 2; i * i <= n; i++)
	{
		if (spf[i] == i)
		{
			for (ll j = i * i; j <= n; j += i)
			{
				if (spf[j] == j)
					spf[j] = i;
			}
		}
	}
	return spf;
}

vector<ll> factolization(ll x, vector<ll> &spf)
{
	vector<ll> v;
	while (x != 1)
	{
		v.push_back(spf[x]);
		x /= spf[x];
	}
	sort(v.begin(), v.end());
	return v;
}

int main()
{
	ll n;
	cin >> n;
	ll x = 3;
	ll sum = 1;

	auto spf = smallest_prime_factor(1000010);

	for (ll i = 3; i <= n; i++)
	{
		auto fact = factolization(n, spf);
		for ()
			sum += ;
		x++;
	}

	cout << sum << endl;

	return 0;
}