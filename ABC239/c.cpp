#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
ll x[] = {1, 2, -1, 2, 1, -2, -1, -2};
ll y[] = {2, 1, 2, -1, -2, 1, -2, -1};

int main()
{
	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	rep(i, 8)
	{
		if ((x1 + x[i] - x2) * (x1 + x[i] - x2) + (y1 + y[i] - y2) * (y1 + y[i] - y2) == 5)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;
}