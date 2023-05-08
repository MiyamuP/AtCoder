#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
	ll h1, h2, h3, w1, w2, w3;
	cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
	ll g[3][3];
	ll p = 0;

	for (ll cen = 1; cen <= min(h2, w2) - 2; cen++)
	{
		g[1][1] = cen;
		for (ll cenhr = 1; cenhr <= h2 - cen - 1; cenhr++)
		{
			g[1][2] = cenhr;
			g[1][0] = h2 - cen - cenhr;
			for (ll upcen = 1; upcen <= min(h1, w2) - 2; upcen++)
			{
				g[0][1] = upcen;
				for (ll upr = 1; upr <= h1 - upcen - 1; upr++)
				{
					g[0][2] = upr;
					g[0][0] = h1 - upr - upcen;
					for (ll downcen = 1; downcen <= min(h3, w2) - 2; downcen++)
					{
						g[2][1] = downcen;
						for (ll downr = 1; downr <= h3 - downcen - 1; downr++)
						{
							g[2][2] = downr;
							g[2][0] = h3 - downr - downcen;
							ll ln = 0, cn = 0, rn = 0;
							rep(lw, 3)
							{
								ln += g[lw][0];
							}
							rep(cw, 3)
							{
								cn += g[cw][1];
							}
							rep(rw, 3)
							{
								rn += g[rw][2];
							}

							if (ln == w1 && cn == w2 && rn == w3)
							{
								p++;
							}
						}
					}
				}
			}
		}
	}
	cout << p << endl;

	return 0;
}