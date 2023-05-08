#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	vector<ll> a(n, 0);
	ll ecnum = 0;
	ll sum = 0;
	ll cnum = 0;
	rep(i, n)
	{
		cin >> a[i];
		if (a[i] == i + 1)
		{
			ecnum++;
		}
		else if (a[i] < i + 1)
		{

			if (i == a[a[i] - 1] - 1)
			{
				sum++;
			}
		}
	}
	sum += (ecnum * (ecnum - 1)) / 2;
	cout << sum << endl;
	return 0;
}