#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n;
	cin >> n;
	char a[n][n];
	rep(i, n)
	{
		rep(j, n)
		{
			cin >> a[i][j];
		}
	}
	bool f = true;
	rep(i, n)
	{
		rep(j, n)
		{
			if (a[i][j] == 'W' && a[j][i] != 'L')
			{
				f = false;
			}
			if (a[i][j] == 'L' && a[j][i] != 'W')
			{
				f = false;
			}
			if (a[i][j] == 'D' && a[j][i] != 'D')
			{
				f = false;
			}
		}
	}
	if (f)
	{
		cout << "correct" << endl;
	}
	else
	{
		cout << "incorrect" << endl;
	}
	return 0;
}