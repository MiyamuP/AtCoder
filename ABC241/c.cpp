#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	string s[n];
	rep(i, n)
	{
		cin >> s[i];
	}
	// よこ
	rep(i, n)
	{
		ll first = -1;
		ll second = -1;
		ll num = 0;
		rep(j, n)
		{
			if (s[i][j] == '.')
			{
				if (first == -1)
				{
					first = j;
					num++;
				}
				else if (second == -1)
				{
					second = j;
					num++;
				}
				else
				{
					num = j - first;
					first = second;
					second = j;
				}
			}
			else
			{
				num++;
			}
			if (num >= 6)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	// たて
	rep(i, n)
	{
		ll first = -1;
		ll second = -1;
		ll num = 0;
		rep(j, n)
		{
			if (s[j][i] == '.')
			{
				if (first == -1)
				{
					first = j;
					num++;
				}
				else if (second == -1)
				{
					second = j;
					num++;
				}
				else
				{
					num = j - first;
					first = second;
					second = j;
				}
			}
			else
			{
				num++;
			}
			if (num >= 6)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	//　/向き斜め前半
	for (ll i = 0; i < n; i++)
	{
		ll first = -1;
		ll second = -1;
		ll num = 0;
		ll ind = 0;
		for (ll j = i; j >= 0; j--)
		{
			if (s[i - j][j] == '.')
			{
				if (first == -1)
				{
					first = ind;
					num++;
				}
				else if (second == -1)
				{
					second = ind;
					num++;
				}
				else
				{
					num = ind - first;
					first = second;
					second = ind;
				}
			}
			else
			{
				num++;
			}
			if (num >= 6)
			{
				cout << "Yes" << endl;
				return 0;
			}
			ind++;
		}
	}

	ll xfir = n - 1;
	// /向き斜め後半
	for (ll i = 1; i < n; i++)
	{
		ll first = -1;
		ll second = -1;
		ll num = 0;
		ll ind = 0;
		for (ll j = i; j < n; j++)
		{
			if (s[j][xfir - ind] == '.')
			{
				if (first == -1)
				{
					first = ind;
					num++;
				}
				else if (second == -1)
				{
					second = ind;
					num++;
				}
				else
				{
					num = ind - first;
					first = second;
					second = ind;
				}
			}
			else
			{
				num++;
			}
			if (num >= 6)
			{
				cout << "Yes" << endl;
				return 0;
			}
			ind++;
		}
	}

	// \向き斜め前半
	for (ll i = 0; i < n; i++)
	{
		ll first = -1;
		ll second = -1;
		ll num = 0;
		ll ind = 0;
		for (ll j = i; j < n; j++)
		{
			if (s[ind][j] == '.')
			{
				if (first == -1)
				{
					first = ind;
					num++;
				}
				else if (second == -1)
				{
					second = ind;
					num++;
				}
				else
				{
					num = ind - first;
					first = second;
					second = ind;
				}
			}
			else
			{
				num++;
			}
			if (num >= 6)
			{
				cout << "Yes" << endl;
				return 0;
			}
			ind++;
		}
	}

	// \向き斜め後半
	for (ll i = 0; i < n; i++)
	{
		ll first = -1;
		ll second = -1;
		ll num = 0;
		ll ind = 0;
		for (ll j = i; j < n; j++)
		{
			if (s[j][ind] == '.')
			{
				if (first == -1)
				{
					first = ind;
					num++;
				}
				else if (second == -1)
				{
					second = ind;
					num++;
				}
				else
				{
					num = ind - first;
					first = second;
					second = ind;
				}
			}
			else
			{
				num++;
			}
			if (num >= 6)
			{
				cout << "Yes" << endl;
				return 0;
			}
			ind++;
		}
	}
	cout << "No" << endl;

	return 0;
}