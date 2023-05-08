#include <iostream>
#include <map>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	map<ll, bool> a;
	ll n;
	cin >> n;

	ll num = 0;
	rep(i, n)
	{
		ll ai;
		cin >> ai;
		if (!a[ai])
		{
			a[ai] = true;
			num++;
		}
	}
	cout << num << endl;
	return 0;
}