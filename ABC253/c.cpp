#include <iostream>
#include <queue>
#include <map>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll q;
	cin >> q;
	map<ll, ll> m;
	priority_queue<ll> maxq;
	priority_queue<ll, vector<ll>, greater<ll>> minq;
	ll n[q], x[q], c[q];

	rep(i, q)
	{
		cin >> n[i];
		switch (n[i])
		{
		case 1:
			cin >> x[i];
			break;

		case 2:
			cin >> x[i] >> c[i];
			break;

		case 3:
			break;
		}
	}
	rep(i, q)
	{

		switch (n[i])
		{
		case 1:
			if (m[x[i]] <= 0)
			{
				maxq.push(x[i]);
				minq.push(x[i]);
			}
			m[x[i]]++;
			break;

		case 2:
			m[x[i]] -= c[i];
			if (m[x[i]] < 0)
				m[x[i]] = 0;
			break;

		case 3:
			while (m[maxq.top()] <= 0)
			{
				maxq.pop();
			}

			while (m[minq.top()] <= 0)
			{
				minq.pop();
			}

			cout << maxq.top() - minq.top() << endl;
			break;
		}
	}
	return 0;
}