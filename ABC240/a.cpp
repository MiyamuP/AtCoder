#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll a, b;
	cin >> a >> b;
	if (abs(a - b) == 1 || (a == 1) && b == 10 || a == 10 && b == 1)
	{
		cout << "Yes" << endl;
		return 0;
	}
	cout << "No" << endl;
	return 0;
}