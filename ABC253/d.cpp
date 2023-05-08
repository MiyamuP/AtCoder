#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, a, b;
	cin >> n >> a >> b;

	ll rnum = n / b;

	unsigned long bsum = (n * (n + 1)) / 2;
	bsum -= ((rnum * (2 * b + (rnum - 1) * b)) / 2);

	ll rnum2 = n / a;
	bsum -= ((rnum2 * (2 * a + (rnum2 - 1) * a)) / 2);

	ll rnum3 = n / (a * b);
	bsum += ((rnum3 * (2 * a * b + (rnum3 - 1) * a * b)) / 2);

	cout << bsum << endl;

	return 0;
}