#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	string s;
	ll k;
	cin >> s >> k;

	vector<ll> sn;

	ll n_max = 0;
	ll right = 0;

	ll tk = k;

	rep(left, s.size())
	{
		while (right < s.size() && tk >= 0)
		{
			if (s[right] == '.')
			{
				tk--;
			}
			if (tk >= 0)
				n_max = max(n_max, right - left + 1);
			right++;
		}
		if (s[left] == '.')
		{
			if (tk < k)
			{
				tk++;
			}
		}
	}

	cout << n_max << endl;
	return 0;
}