#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
vector<ll> an(200001, 0);

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	rep(i, n)
	{
		ll num;
		cin >> num;
		a[i] = num;
		an[num]++;
	}

	return 0;
}