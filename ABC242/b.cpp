#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	cout << s << endl;
	return 0;
}