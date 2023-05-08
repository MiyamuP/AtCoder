#include <iostream>
#include <string>
#include <list>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll n;
	cin >> n;
	string s;
	cin >> s;
	list<ll> ls = {0};
	ll in = 0;
	decltype(ls)::iterator it = ls.begin();

	rep(i, s.size())
	{
		if (s[i] == 'L')
		{
			ls.insert(it, i + 1);
			it--;
		}
		else
		{
			it++;
			ls.insert(it, i + 1);
			it--;
		}
		}

	for (auto a : ls)
	{
		cout << a << " ";
	}
	cout << endl;

	return 0;
}