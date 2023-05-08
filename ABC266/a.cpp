#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	string s;
	cin >> s;
	cout << s[(s.length() + 1) / 2 - 1] << endl;

	return 0;
}