#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	char s[3];
	rep(i, 3)
	{
		cin >> s[i];
	}
	char t[3];
	rep(i, 3)
	{
		cin >> t[i];
	}
	int n[3];
	rep(i, 3)
	{
		rep(j, 3)
		{
			if (s[i] == t[j])
			{
				n[i] = j + 1;
				break;
			}
		}
	}
	if ((n[0] == 1 && n[1] == 2 && n[2] == 3) || (n[0] == 2 && n[1] == 3 && n[2] == 1) || (n[0] == 3 && n[1] == 1 && n[2] == 2))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}