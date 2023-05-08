#include <iostream>
#include <string>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	string s;
	cin >> s;

	string t;
	rep(i, 100)
	{
		t += "oxx";
	}
	if (t.find(s) != string::npos)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}