#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll y;
	cin >> y;
	if (y % 4 == 2)
	{
		cout << y << endl;
	}
	else if (y % 4 == 3)
	{

		cout << y + 3 << endl;
	}
	else if (y % 4 == 1)
	{
		cout << y + 1 << endl;
	}
	else if (y % 4 == 0)
	{
		cout << y + 2 << endl;
	}
	return 0;
}