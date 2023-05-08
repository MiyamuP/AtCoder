#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll a[10];
	rep(i, 10)
	{
		cin >> a[i];
	}
	ll num = 0;
	rep(i, 3)
	{
		num = a[num];
	}
	cout << num << endl;
	return 0;
}