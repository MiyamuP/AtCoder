#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int ctoi(char c)
{
	if (c >= '0' && c <= '9')
	{
		return c - '0';
	}
	return 0;
}

int main()
{
	string s;
	cin >> s;
	ll x = 0;
	ll lf = false;
	int dis;
	int kn = 0;
	rep(i, s.size())
	{
		if (i == 1)
		{
			int num0 = ctoi(s[0]);
			int num1 = ctoi(s[1]);
			if (num0 > num1)
			{
				lf = true;
				dis = num0 - num1;
			}
			else
			{
				dis = num1 - num0;
			}
		}
		x *= 10;
		x += ctoi(s[i]);
		kn++;
	}

		return 0;
}