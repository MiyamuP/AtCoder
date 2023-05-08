#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

bool my_compare(pair<ll, ll> a, pair<ll, ll> b)
{

	return a.first > b.first;
}

int main()
{
	ll n, w;
	cin >> n >> w;
	pair<ll, ll> pairs[n];

	rep(i, n)
	{
		ll first, second;
		cin >> first >> second;
		pairs[i] = make_pair(first, second);
	}

	sort(pairs, pairs + n, my_compare);

	ll wsum = 0;
	ll sum = 0;

	rep(i, n)
	{
		if ((wsum + pairs[i].second) >= w)
		{
			sum += pairs[i].first * (w - wsum);
			break;
		}

		sum += pairs[i].first * pairs[i].second;
		wsum += pairs[i].second;
	}
	cout << sum << endl;
	return 0;
}