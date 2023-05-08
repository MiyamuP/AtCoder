#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, a, b;
	cin >> n >> a >> b;

	char s[n * a][n * b];

	rep(i, a * n)
	{
		rep(j, b * n)
		{
			if (((i) / a + (j) / b) % 2 == 0)
			{
				s[i][j] = '.';
			}
			else
			{
				s[i][j] = '#';
			}
		}
	}

	rep(i, n * a)
	{
		rep(j, b * n)
		{
			cout << s[i][j];
		}
		cout << endl;
	}

	return 0;
}