#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll h, w;
	cin >> h >> w;
	char g[h][w];
	bool b[h][w];

	rep(y, h)
	{
		rep(x, w)
		{
			cin >> g[y][x];
			b[y][x] = false;
		}
	}
	ll i = 0, j = 0;
	b[i][j] = true;
	bool f = true;
	do
	{
		// cout << i + 1 << ' ' << j + 1 << endl;
		switch (g[i][j])
		{
		case 'U':
			if (i != 0)
			{
				i--;
				if (b[i][j])
				{
					cout << -1 << endl;
					return 0;
				}
				b[i][j] = true;
			}
			else
			{
				f = false;
			}
			break;

		case 'D':
			if (i != h - 1)
			{
				i++;
				if (b[i][j])
				{
					cout << -1 << endl;
					return 0;
				}
				b[i][j] = true;
			}
			else
			{
				f = false;
			}
			break;

		case 'L':
			if (j != 0)
			{
				j--;
				if (b[i][j])
				{
					cout << -1 << endl;
					return 0;
				}
				b[i][j] = true;
			}
			else
			{
				f = false;
			}
			break;

		case 'R':
			if (j != w - 1)
			{
				j++;
				if (b[i][j])
				{
					cout << -1 << endl;
					return 0;
				}
				b[i][j] = true;
			}
			else
			{
				f = false;
			}
			break;

		default:
			f = false;
			break;
		}

	} while (f);
	cout << i + 1 << ' ' << j + 1 << endl;
	return 0;
}
