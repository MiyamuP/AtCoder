#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n, x;
	cin >> n >> x;
	vector<ll> a(n), b(n);
	rep(i, n)
	{
		cin >> a[i] >> b[i];
	}
	vector<vector<ll>> dp(n + 1, vector<ll>(x + 1, false));
	dp[0][0] = true;
	rep(i, n)
	{
		rep(j, x)
		{
			if (dp[i][j])
			{
				if (j + a[i] <= x)
				{
					dp[i + 1][j + a[i]] = true;
				}
				if (j + b[i] <= x)
				{
					dp[i + 1][j + b[i]] = true;
				}
			}
		}
	}
	if (dp[n][x])
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}