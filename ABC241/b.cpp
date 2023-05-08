#include <iostream>
#include <map>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;

	ll m;
	cin >> m;
	map<ll, ll> a;
	rep(i, n)
	{
		ll ain;
		cin >> ain;
		a[ain]++;
	}

	ll f = false;
	rep(i, m)
	{
		ll bin;
		cin >> bin;
		if (a.find(bin) != a.end())
		{
			a[bin]--;
		}
		else
		{
			f = true;
		}

		if (a[bin] < 0)
		{
			f = true;
		}
	}

	if (f)
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}

	return 0;
}