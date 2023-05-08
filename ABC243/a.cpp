#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll v, a, b, c;
	cin >> v >> a >> b >> c;
	char now = 'f';
	while (v >= 0)
	{
		if (now == 'f')
		{
			v -= a;
			if (v < 0)
			{
				cout << "F" << endl;
				return 0;
			}
			now = 'm';
		}
		else if (now == 'm')
		{
			v -= b;
			if (v < 0)
			{
				cout << "M" << endl;
				return 0;
			}
			now = 't';
		}
		else if (now == 't')
		{
			v -= c;
			if (v < 0)
			{
				cout << "T" << endl;
				return 0;
			}
			now = 'f';
		}
	}
	return 0;
}