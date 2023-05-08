#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll devnum = pow(10, 9) + 7;
	string s;
	cin >> s;
	ll dp[100010][9];
	rep(i, s.size())
	{
		rep(w, 9)
		{
			switch (s[i])
			{
			case 'c':
				/* code */
				break;

			default:
				break;
			}
		}
	}
	return 0;
}