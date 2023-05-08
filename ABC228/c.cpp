#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, k;
	cin >> n >> k;
	// map<int, ll> m;
	int tsum3[n];
	int psum3[n];
	rep(i, n)
	{
		int sum3 = 0;
		rep(j, 3)
		{
			int num;
			cin >> num;
			sum3 += num;
		}
		psum3[i] = sum3;
		tsum3[i] = sum3;
	}
	sort(tsum3, tsum3 + n, greater<int>());
	int tn = tsum3[k - 1];
	rep(i, n)
	{
		if (psum3[i] + 300 >= tn)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}

	return 0;
}