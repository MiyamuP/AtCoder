#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll a, b, c, d, e, f, x;
	cin >> a >> b >> c >> d >> e >> f >> x;
	ll tn = x / (a + c);
	ll tan = tn * b * a;
	ll tdn = x % (a + c);
	if (tdn > a)
	{
		tan += b * a;
	}
	else
	{
		tan += tdn * b;
	}

	ll an = x / (d + f);
	ll aan = an * e * d;
	ll adn = x % (d + f);
	if (adn > d)
	{
		aan += e * d;
	}
	else
	{
		aan += adn * e;
	}

	// cout << aan << ' ' << tan << endl;

	if (aan == tan)
	{
		cout << "Draw" << endl;
	}
	else if (aan > tan)
	{
		cout << "Aoki" << endl;
	}
	else
	{
		cout << "Takahashi" << endl;
	}
	return 0;
}