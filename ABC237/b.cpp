#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll h, w;
	cin >> h >> w;
	ll a[h][w];
	ll b[w][h];
	rep(x, h)
	{
		rep(y, w)
		{
			cin >> b[y][x];
		}
	}

	rep(y, w)
	{
		rep(x, h)
		{
			cout << b[y][x];
			if (x != h - 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}