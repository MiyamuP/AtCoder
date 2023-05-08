#include <iostream>
#include <vector>
#include <map>
#include <string>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll l[n];
	map<string, ll> a;
	for (ll i = 0; i < n; i++)
	{
		cin >> l[i];
		string ina[l[i]];
		string alen;
		for (ll j = 0; j < l[i]; j++)
		{

			cin >> ina[j];
			alen += ina[j];
			alen += ",";
		}
		a[alen] = 1;
	}
	cout << a.size() << endl;
	return 0;
}