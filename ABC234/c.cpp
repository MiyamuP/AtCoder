#include <iostream>
#include <string>
#include <stack>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll k;
	cin >> k;
	ll num = k;
	stack<ll> s;
	while (num > 0)
	{
		if ((num & 1) == 1)
		{
			s.push(2);
		}
		else
		{
			s.push(0);
		}
		num = num >> 1;
	}

	while (!s.empty())
	{
		ll ans = s.top();
		s.pop();
		cout << ans;
	}
	cout << endl;
	return 0;
}