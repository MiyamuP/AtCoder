#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, m;
	cin >> n >> m;
	ll u[m], v[m];

	vector<pair<ll, ll>> vec;
	rep(i, m)
	{
		cin >> u[i] >> v[i];
	}
	rep(i, m)
	{
		rep(j, m)
		{
			if (v[i] == u[j])
			{
				vec.push_back({u[i], v[j]});
			}
		}
	}
	ll num = 0;
	rep(i, m)
	{
		for (auto itr = vec.begin(); itr != vec.end(); itr++)
		{
			if (u[i] == itr->first && v[i] == itr->second)
			{
				num++;
			}
		}
	}
	cout << num << endl;
	return 0;
}