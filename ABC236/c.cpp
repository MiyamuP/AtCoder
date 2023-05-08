#include <iostream>
#include <string>
#include <map>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n, m;
	cin >> n >> m;
	map<string, bool> ma;
	string sl[n];
	rep(i, n)
	{
		string s;
		cin >> s;
		ma.insert(make_pair(s, false));
		sl[i] = s;
	}
	rep(i, m)
	{
		string s;
		cin >> s;
		ma[s] = true;
	}

	rep(i, n)
	{
		if (ma[sl[i]])
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}