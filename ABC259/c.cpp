#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	string s, t;
	cin >> s >> t;
	ll s_in = 0;
	ll t_in = 0;
	ll slen = 1;
	ll tlen = 1;
	bool f = true;
	while (t_in < t.length())
	{
		// cout << s[s_in] << ',' << t[t_in] << endl;
		if (t_in > 0)
		{
			if (t[t_in - 1] == t[t_in])
			{
				tlen++;
			}
			else
			{
				tlen = 1;
			}
		}
		if (s_in > 0)
		{
			if (s[s_in - 1] == s[s_in])
			{
				slen++;
			}
			else
			{
				slen = 1;
			}
		}
		if (s[s_in] == t[t_in])
		{
			if (slen == 1)
			{
				s_in++;
				t_in++;
			}
			else if (t_in + 1 < t.length() && s_in + 1 < s.length() && s[s_in + 1] == s[s_in] && t[t_in + 1] == t[t_in])
			{
				s_in++;
				t_in++;
			}
			else
			{
				t_in++;
			}
		}
		else
		{
			s_in++;
			if (s[s_in] != t[t_in])
			{
				f = false;
				break;
			}
			else
			{
				t_in++;
			}
		}
	}
	if (f)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}