#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n, m, x, t, d;
	cin >> n >> m >> x >> t >> d;
	if (m > x)
	{
		cout << t << endl;
	}
	else
	{
		cout << t - (x - m) * d << endl;
	}
	return 0;
}