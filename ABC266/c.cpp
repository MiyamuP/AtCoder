#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
bool f(ll px, ll py, ll p0x, ll p0y, ll p1x, ll p1y, ll p2x, ll p2y)
{
	double Area = 0.5 * (double)(-p1y * p2x + p0y * (-p1x + p2x) + p0x * (p1y - p2y) + p1x * p2y);
	double s = 1 / (2 * Area) * (double)(p0y * p2x - p0x * p2y + (p2y - p0y) * px + (p0x - p2x) * py);
	double t = 1 / (2 * Area) * (double)(p0x * p1y - p0y * p1x + (p0y - p1y) * px + (p1x - p0x) * py);
	// cout << Area << " " << s << " " << t << endl;

	if ((0.0 < s && s < 1.0) && (0.0 < t && t < 1.0) && (0.0 < 1.0 - s - t && 1.0 - s - t < 1.0))
	{
		return true; // Inside Triangle
	}
	else
	{
		return false;
	}
}
int main()
{
	ll ax, ay, bx, by, cx, cy, dx, dy;
	cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
	bool tf = true;
	if (f(ax, ay, bx, by, cx, cy, dx, dy))
	{
		tf = false;
	}
	if (f(bx, by, ax, ay, cx, cy, dx, dy))
	{
		tf = false;
	}
	if (f(cx, cy, bx, by, ax, ay, dx, dy))
	{
		tf = false;
	}
	if (f(dx, dy, bx, by, cx, cy, ax, ay))
	{
		tf = false;
	}
	if (tf)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}