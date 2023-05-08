#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, m;
	cin >> n >> m;
	ll s[m], c[m];
	ll ans[n];
	bool f = false;
	rep(i, n)
	{
		ans[i] = -1;
	}
	rep(i, m)
	{
		cin >> s[i] >> c[i];
		if (ans[s[i] - 1] == -1 || ans[s[i] - 1] == c[i])
		{
			ans[s[i] - 1] = c[i];
		}
		else
		{
			f = true;
		}
	}
	if (f)
	{
		cout << "-1" << endl;
		return 0;
	}
	rep(i, n)
	{
		if (i == 0)
		{
			if (ans[i] == 0 && n != 1)
			{
				cout << "-1" << endl;
				return 0;
			}
			else if (n != 1 && ans[i] == -1)
			{
				ans[i] = 1;
			}
			else if (n == 1 && ans[i] == -1)
			{
				ans[i] = 0;
			}
		}
		else if (ans[i] == -1)
		{
			ans[i] = 0;
		}
	}
	rep(i, n)
	{
		cout << ans[i];
	}
	cout << endl;
	return 0;
}