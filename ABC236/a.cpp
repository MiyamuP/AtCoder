#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	string s;
	cin >> s;
	ll a, b;
	cin >> a >> b;
	char tmp = s[a - 1];
	s[a - 1] = s[b - 1];
	s[b - 1] = tmp;
	cout << s << endl;
	return 0;
}