#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll x, y;
	cin >> x >> y;
	ll num = 0;
	while (y > x + 10 * num)
	{
		num++;
	}
	cout << num << endl;
	return 0;
}