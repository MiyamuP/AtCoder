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

	cout << fixed << setprecision(15) << sqrt(n * (n + 12800000)) << endl;

	return 0;
}