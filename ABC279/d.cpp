#include <iostream>
#include <cmath>
#include <iomanip>
#include <float.h>

using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    double a, b;
    cin >> a >> b;
    double prev;
    double now = (double)a;
    double lp = 0.1;
    ll itr = 10000000;
    double x0 = a / b;
    double minn = a;
    rep(i, itr)
    {
        x0 = x0 - lp * (b - a / (2 * (x0 + 1) * sqrt(x0 + 1)));
        minn = min(minn, b * (ll)x0 + a / sqrt((ll)x0 + 1));
    }
    cout << fixed << setprecision(10) << minn << endl;
    return 0;
}