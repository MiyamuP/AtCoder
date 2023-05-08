#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
	int n;
	cin >> n;

	if (n >= 42)
	{
		n++;
	}

	string s = to_string(n);
	string ans = s;

	rep(i, (3 - s.size()))
	{
		ans = "0" + ans;
	}
	ans = "AGC" + ans;

	cout << ans << endl;

	return 0;
}