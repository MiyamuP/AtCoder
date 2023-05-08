#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n;
	cin >> n;
	if (n == 1)
	{
		cout << 1 << endl;
		return 0;
	}
	ll a[n];
	rep(i, n)
	{
		a[i] = 0;
	}
	rep(i, 4 * n - 1)
	{
		ll in;
		cin >> in;
		a[in - 1]++;
	}
	ll max = 0;
	rep(i, n)
	{
		if (max < a[i])
			max = a[i];
		if (max < a[i])
		{
			cout << 1 << endl;
			return 0;
		}
		else if (max > a[i])
		{
			cout << i + 1 << endl;
			return 0;
		}
	}
	return 0;
}