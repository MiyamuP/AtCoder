#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	vector<bool> a(2 * n + 1, true);
	rep(i, 2 * n + 1)
	{
		rep(i, 2 * n + 1)
		{
			if (a[i])
			{
				cout << i + 1 << endl
					 << flush;
				a[i] = false;
				break;
			}
		}
		ll en;
		cin >> en;
		if (en == 0)
		{
			break;
		}
		a[en - 1] = false;
	}
	return 0;
}