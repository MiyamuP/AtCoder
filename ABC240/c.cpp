#include <iostream>
#include <queue>

using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, x;
	cin >> n >> x;
	ll a[n], b[n];
	rep(i, n)
	{
		cin >> a[i] >> b[i];
	}

	queue<pair<ll, ll>> que;
	que.push(make_pair(0, x));
	while (!que.empty())
	{
		pair<ll, ll> p = que.front();
		que.pop();
		ll anum = p.second - a[p.first];
		ll bnum = p.second - b[p.first];
		if (anum == 0 && p.first == n - 1)
		{
			cout << "Yes" << endl;
			return 0;
		}
		else if (anum > 0 && p.first < n - 1 && anum - 100 * (n - p.first - 1) <= 0)
		{
			que.push(make_pair(p.first + 1, anum));
		}

		if (bnum == 0 && p.first == n - 1)
		{
			cout << "Yes" << endl;
			return 0;
		}
		else if (bnum > 0 && p.first < n - 1 && bnum - 100 * (n - p.first - 1) <= 0)
		{
			que.push(make_pair(p.first + 1, bnum));
		}
	}
	cout << "No" << endl;
	return 0;
}