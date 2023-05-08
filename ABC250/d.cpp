#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

vector<bool> Eratosthenes(int N)
{
	// テーブル
	vector<bool> isprime(N + 1, true);

	// 0, 1 は予めふるい落としておく
	isprime[0] = isprime[1] = false;

	// ふるい
	for (int p = 2; p <= N; ++p)
	{
		// すでに合成数であるものはスキップする
		if (!isprime[p])
			continue;

		// p 以外の p の倍数から素数ラベルを剥奪
		for (int q = p * 2; q <= N; q += p)
		{
			isprime[q] = false;
		}
	}

	// 1 以上 N 以下の整数が素数かどうか
	return isprime;
}

int main()
{
	vector<bool> isprime = Eratosthenes(1000000);
	vector<ll> p;
	rep(i, isprime.size())
	{
		if (isprime[i])
			p.push_back(i);
	}
	ll n;
	cin >> n;

	ll num = 0;

	rep(i, p.size())
	{
		for (ll j = i + 1; j < p.size(); j++)
		{
			if (p[i] * pow(p[j], 3) <= n)
			{
				num++;
			}
			else if (j - 1 == 1)
			{
				cout << num << endl;
				return 0;
			}
			else
			{
				break;
			}
		}
	}

	cout << num << endl;

	return 0;
}