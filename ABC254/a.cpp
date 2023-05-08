#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	if (n - (n / 100) * 100 < 10)
	{
		cout << '0' << n - (n / 100) * 100 << endl;
	}
	else
	{
		cout << n - (n / 100) * 100 << endl;
	}
	return 0;
}