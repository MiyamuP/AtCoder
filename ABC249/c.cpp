#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

vector<ll> LLToVector(ll bit, ll n)
{
	vector<ll> s;
	rep(i, n)
	{
		if (bit & (1 << i))
		{
			s.push_back(i);
		}
	}
	return s;
}

int main()
{
	ll n, k;

	cin >> n >> k;
	vector<string> s(n);
	rep(i, n)
	{
		cin >> s[i];
	}

	vector<ll> al(26, k);

	ll m = 0;
	for (ll bit = 0; bit < (1 << n); ++bit)
	{
		vector<ll> ls = LLToVector(bit, n);

		vector<ll> al(26, k);

		for (ll i : ls)
		{
			for (char c : s[i])
			{
				al[c - 'a']--;
			}
		}
		ll cnt = 0;
		for (ll nm : al)
		{
			if (nm == 0)
				cnt++;
		}
		m = max(m, cnt);
	}

	cout << m << endl;

	return 0;
}