#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	vector<ll> ba;
	vector<ll> a;

	rep(i, n)
	{
		a.push_back(1);

		rep(j, ba.size())
		{
			if (j + 1 < ba.size())
			{
				a.push_back(ba[j] + ba[j + 1]);
			}
			else
			{
				a.push_back(1);
			}
		}
		ba.clear();
		rep(j, a.size())
		{
			ba.push_back(a[j]);
			cout << a[j] << ' ';
		}
		cout << endl;
		a.clear();
	}

	return 0;
}