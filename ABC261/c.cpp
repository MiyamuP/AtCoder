#include <iostream>
#include <map>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	map<string, ll> m;
	ll n;
	cin >> n;
	rep(i, n)
	{
		string s;
		cin >> s;
		m[s]++;
		if (m[s] == 1)
		{
			cout << s << endl;
		}
		else
		{
			cout << s << '(' << m[s] - 1 << ')' << endl;
		}
	}
	return 0;
}