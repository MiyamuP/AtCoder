#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	string s;
	cin >> s;
	ll fnum = 0;
	while (s[fnum] == 'a')
	{
		fnum++;
	}

	ll lnum = 0;

	while (s[s.size() - 1 - lnum] == 'a')
	{
		lnum++;
	}
	if (lnum >= fnum)
	{
		if (s == string(s.rbegin(), s.rend()))
		{
			cout << "Yes" << endl;
			return 0;
		}
		while (lnum > fnum)
		{
			s.pop_back();
			lnum--;
		}
		if (s == string(s.rbegin(), s.rend()))
		{
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;
}