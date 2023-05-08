#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	string s;
	cin >> s;
	bool bf = false;
	bool sf = false;

	rep(i, s.size())
	{
		if (isupper(s[i]))
		{
			bf = true;
		}
		else
		{
			sf = true;
		}
		for (ll j = 0; j < i; j++)
		{
			if (s[i] == s[j])
			{
				cout << "No" << endl;
				return 0;
			}
		}
	}
	if (bf && sf)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}