#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	vector<ll> a(100000001);
	rep(i, 100000001)
	{
		if (a[i] != 0)
		{
			cout << "No" << endl;
		}
	}
	return 0;
}