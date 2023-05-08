#include <iostream>
#include <iomanip>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    double a, b;
    cin >> a >> b;
    cout << std::fixed << std::setprecision(3) << b / a << endl;
    return 0;
}