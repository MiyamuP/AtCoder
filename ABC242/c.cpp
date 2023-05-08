#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	vector<ll> num(10, 0);
	vector<ll> bnum(10, 1);

	ll d = 998244353;

	for (ll i = 2; i <= n; i++)
	{
		for (ll j = 1; j <= 9; j++)
		{
			if (j != 1)
			{
				num[j] = (num[j] + bnum[j - 1]);
				num[j] %= d;
			}
			num[j] = (num[j] + bnum[j]);
			num[j] %= d;
			if (j != 9)
			{
				num[j] = (num[j] + bnum[j + 1]);
				num[j] %= d;
			}
		}
		for (ll j = 1; j <= 9; j++)
		{
			bnum[j] = num[j];
			if (i != n)
			{
				num[j] = 0;
			}
		}
	}

	ll sum = 0;
	for (int i = 1; i <= 9; i++)
	{
		sum = sum + num[i];
		sum %= d;
	}
	cout << sum << endl;

	return 0;
}