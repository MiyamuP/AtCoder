#include <iostream>
#include <map>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	map<string, ll> m;
	rep(i, n)
	{
		string s;
		cin >> s;
		if (m.find(s) == m.end())
		{
			m.insert(make_pair(s, 1));
		}
		else
		{
			m[s]++;
		}
	}

	string ms;
	ll max = 0;
	for (auto itr = m.begin(); itr != m.end(); itr++)
	{
		if (max < itr->second)
		{
			ms = itr->first;
			max = itr->second;
		}
	}
	cout << ms << endl;
	return 0;
}