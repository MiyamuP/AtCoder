#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	double x[n], y[n];
	rep(i, n)
	{
		cin >> x[i] >> y[i];
	}
	double ans = 0;
	rep(i, n)
	{
		rep(j, n)
		{
			double dis = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
			if (dis >= ans)
			{
				ans = dis;
			}
		}
	}
	cout << fixed << setprecision(10) << ans << endl;
	return 0;
}