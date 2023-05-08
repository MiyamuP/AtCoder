#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

vector<bool> seen;
struct param
{
	ll y;
	ll x;
	ll num;
};

int main()
{
	ll h, w;
	cin >> h >> w;
	char c[h][w];

	rep(i, h)
	{
		rep(j, w)
		{
			cin >> c[i][j];
		}
	}

	int dy[] = {1, 0};
	int dx[] = {0, 1};

	queue<param> que;
	param p = {0, 0, 1};
	c[0][0] = '#';
	que.push(p);

	ll n_max = 1;

	while (!que.empty())
	{
		param v = que.front();
		que.pop();
		ll cy = v.y;
		ll cx = v.x;

		rep(i, 2)
		{
			cy = v.y + dy[i];
			cx = v.x + dx[i];
			if (cy >= h || cx >= w)
			{
				continue;
			}
			ll cn = v.num + 1;
			if (c[cy][cx] == '.')
			{
				param p = {cy, cx, cn};
				que.push(p);
				n_max = max(cn, n_max);
				// cout << cy << "," << cx << endl;
				c[cy][cx] = '#';
			}
		}
	}
	cout << n_max << endl;
	return 0;
}