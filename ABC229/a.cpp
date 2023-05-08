#include <iostream>
#include <string>

using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	string s1, s2;
	cin >> s1 >> s2;

	if ((s1[0] == '.' && s2[1] == '.') || (s1[1] == '.' && s2[0] == '.'))
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}

	return 0;
}