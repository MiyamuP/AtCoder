#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll x;
	cin >> x;

	if (x % 10 == 0)
	{
		cout << x / 10 << endl;
	}
	else if (x > 0)
	{
		cout << x / 10 << endl;
	}
	else
	{
		cout << x / 10 - 1 << endl;
	}
	return 0;
}