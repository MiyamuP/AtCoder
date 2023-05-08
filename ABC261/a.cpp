#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	ll num = 0;
	ll f = -1;
	ll l = -1;

	rep(i, 101)
	{
		if (f != -1)
		{
			if (!(l1 <= i && i < r1 && l2 <= i && i < r2))
			{
				l = i;
				break;
			}
		}
		else if (l1 <= i && i < r1 && l2 <= i && i < r2)
		{
			if (f == -1)
			{
				f = i;
			}
		}
	}
	cout << l - f << endl;
	return 0;
}