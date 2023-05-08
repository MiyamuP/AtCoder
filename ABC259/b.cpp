#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	static const double pi = 3.141592653589793;
	double a, b, d;
	cin >> a >> b >> d;
	double ra = atan2(b, a);
	double dis = sqrt(pow(b, 2) + pow(a, 2));

	cout << fixed << setprecision(10) << dis * cos(ra + (d / 180 * pi)) << ' ' << dis * sin(ra + (d / 180 * pi)) << endl;
	return 0;
}