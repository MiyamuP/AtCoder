#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n;
	cin >> n;
	ll a[n];
	ll p = 0;
	vector<bool> k(4, false);

	rep(i, n)
	{
		cin >> a[i];
		k[0] = true;
		for (ll j = 3; j >= 0; j--)
		{
			if (k[j])
			{
				if (j + a[i] > 3)
				{
					p++;
					k[j] = false;
				}
				else
				{
					k[j + a[i]] = true;
					k[j] = false;
				}
			}
		}
	}
	cout << p << endl;
	return 0;
}