#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll x, y, n;
	cin >> x >> y >> n;
	if (x * 3 > y)
	{
		cout << y * (ll)(n / 3) + n % 3 * x << endl;
	}
	else
	{
		cout << x * n << endl;
	}
	return 0;
}
