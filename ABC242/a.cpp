#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	double a, b, c, x;
	cin >> a >> b >> c >> x;
	if (a >= x)
	{
		cout << "1.000000000" << endl;
	}
	else if (b < x)
	{
		cout << "0.0000000000" << endl;
	}
	else
	{
		cout << c / (b - a) << endl;
	}

	return 0;
}