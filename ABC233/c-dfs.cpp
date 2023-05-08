#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
vector<vector<ll>> a;

ll dfs() {}
int main()
{
	ll n, x;
	cin >> n, x;
	a.resize(n);
	rep(i, n)
	{
		ll l;
		cin >> l;
		a[i].resize(l);
		rep(j, l)
		{
			cin >> a[i][j];
		}
	}
	return 0;
}