#include <iostream>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll r, c;
	cin >> r >> c;
	ll a[2][2];
	rep(i, 2)
	{
		rep(j, 2)
		{
			cin >> a[i][j];
		}
	}
	cout << a[r - 1][c - 1] << endl;
	return 0;
}