#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
vector<bool> Eratosthenes(int N)
{
	vector<bool> isprime(N + 1, true);

	isprime[0] = isprime[1] = false;

	for (int p = 2; p <= N; ++p)
	{
		if (!isprime[p])
			continue;

		for (int q = p * 2; q <= N; q += p)
		{
			isprime[q] = false;
		}
	}

	return isprime;
}

int main()
{
	vector<bool> isprime = Eratosthenes(200);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool sf = false;
	for (int i = a; i <= b; i++)
	{
		sf = false;
		for (int j = c; j <= d; j++)
		{
			if (isprime[i + j])
			{
				sf = true;
			}
		}
		if (!sf)
		{
			cout << "Takahashi" << endl;
			return 0;
		}
	}

	cout << "Aoki" << endl;
	return 0;
}