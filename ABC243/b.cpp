#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	ll b[n];
	rep(i, n)
	{
		cin >> a[i];
	}
	rep(i, n)
	{
		cin >> b[i];
	}

	ll num1 = 0;
	rep(i, n)
	{
		if (a[i] == b[i])
		{
			num1++;
		}
	}
	cout << num1 << endl;

	ll num2 = 0;
	rep(i, n)
	{
		rep(j, n)
		{
			if (a[i] == b[j] && i != j)
			{
				num2++;
			}
		}
	}
	cout << num2 << endl;
	return 0;
}