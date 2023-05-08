#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n, m;
	cin >> n >> m;

	ll a[m], b[m], c[m], d[m];

	rep(i, m)
	{
		cin >> a[i] >> b[i];
	}
	rep(i, m)
	{
		cin >> c[i] >> d[i];
	}

	vector<ll> array;
	rep(i, n)
	{
		array.push_back(i + 1);
	}

	bool samef = false;

	do
	{
		ll cha[m], chb[m];

		rep(i, m)
		{
			cha[i] = array[a[i] - 1];
			chb[i] = array[b[i] - 1];
		}
		vector<bool> chf(m, true);
		rep(i, m)
		{
			rep(j, m)
			{
				if ((cha[i] == c[j] && chb[i] == d[j]) || (cha[i] == d[j] && chb[i] == c[j]) && chf[j])
				{
					chf[j] = false;
				}
			}
		}

		ll num = 0;
		rep(i, m)
		{
			if (!chf[i])
			{
				num++;
			}
		}
		if (num == m)
		{
			samef = true;
			break;
		}
	} while (next_permutation(array.begin(), array.end()));

	if (samef)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}