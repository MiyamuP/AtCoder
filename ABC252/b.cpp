#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n, k;
	cin >> n >> k;
	ll a[n], b[k];
	rep(i, n)
	{
		cin >> a[i];
	}
	rep(i, k)
	{
		cin >> b[i];
	}
	bool f = false;
	ll max = 0;
	rep(i, n)
	{
		if (a[i] > max)
		{
			f = false;
			rep(j, k)
			{
				if (b[j] - 1 == i)
				{
					f = true;
				}
			}
			max = a[i];
		}
		if (a[i] == max)
		{
			rep(j, k)
			{
				if (b[j] - 1 == i)
				{
					f = true;
				}
			}
		}
	}
	if (f)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}