#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll l, r;
	cin >> l >> r;
	string s;
	cin >> s;
	string first;
	string mid;
	string last;

	string ans;

	first = s.substr(0, l - 1);
	mid = s.substr(l - 1, r - l + 1);
	last = s.substr(r, s.size() - r);

	reverse(mid.begin(), mid.end());

	ans = first + mid + last;

	cout << ans << endl;

	return 0;
}