#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define MAX (5 * pow(10, 5))

int main()
{
	ll n, k;
	cin >> n >> k;

	priority_queue<ll, vector<ll>, greater<ll>> que;

	rep(i, k)
	{
		ll in;
		cin >> in;
		que.push(in);
	}

	cout << que.top() << endl;

	rep(i, n - k)
	{
		ll in;
		cin >> in;
		if (in > que.top())
		{
			que.pop();
			que.push(in);

			cout << que.top() << endl;
		}
		else
		{
			cout << que.top() << endl;
		}
	}

	return 0;
}