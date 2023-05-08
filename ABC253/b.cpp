#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll h, w;
	cin >> h >> w;
	char s[h][w];

	ll sy = -1, sx = -1;
	ll gy = -1, gx = -1;
	rep(i, h)
	{
		rep(j, w)
		{
			cin >> s[i][j];
			if (s[i][j] == 'o')
			{
				if (sy == -1)
				{
					sy = i;
					sx = j;
				}
				else
				{
					gy = i;
					gx = j;
					cout << abs(gy - sy) + abs(gx - sx) << endl;
					return 0;
				}
			}
		}
	}

	return 0;
}