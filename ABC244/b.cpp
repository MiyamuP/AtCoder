#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	string s;
	cin >> s;
	char now = 'e';
	ll x = 0;
	ll y = 0;
	for (auto c : s)
	{
		if (now == 'e')
		{
			if (c == 'S')
			{
				x++;
			}
			else
			{
				now = 's';
			}
		}
		else if (now == 's')
		{
			if (c == 'S')
			{
				y--;
			}
			else
			{
				now = 'w';
			}
		}
		else if (now == 'w')
		{
			if (c == 'S')
			{
				x--;
			}
			else
			{
				now = 'n';
			}
		}
		else if (now == 'n')
		{
			if (c == 'S')
			{
				y++;
			}
			else
			{
				now = 'e';
			}
		}
	}
	cout << x << ' ' << y << endl;

	return 0;
}