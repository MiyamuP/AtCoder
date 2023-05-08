#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	string a, b;
	cin >> a >> b;
	bool f = false;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	rep(i, min(a.size(), b.size()))
	{
		int ai = a[i] - '0';
		int bi = b[i] - '0';
		if ((ai + bi) >= 10)
		{
			f = true;
		}
	}

	if (f)
	{
		cout << "Hard" << endl;
	}
	else
	{
		cout << "Easy" << endl;
	}

	return 0;
}