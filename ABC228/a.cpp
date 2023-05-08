#include <iostream>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n, i++)
int main()
{
	int s, t, x;
	cin >> s >> t >> x;

	if (s < t && x >= s && x < t)
	{
		cout << "Yes" << endl;
	}
	else if (s > t && (s <= x || x < t))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}