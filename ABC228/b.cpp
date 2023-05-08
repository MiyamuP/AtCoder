#include <iostream>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, x;
	cin >> n >> x;
	ll a[n];
	bool f[n];
	rep(i, n)
	{
		cin >> a[i];
		f[i] = false;
	}
	ll now = x - 1;
	ll num = 0;
	while (1)
	{
		if (f[now])
		{
			break;
		}
		else
		{
			f[now] = true;
			now = a[now] - 1;
			num++;
		}
	}
	cout << num << endl;
	return 0;
}