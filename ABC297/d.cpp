#include <iostream>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    ll a, b;
    cin >> a >> b;
    ll sum = 0;
    while (a != b)
    {
        if (a > b)
        {
            sum += a / b;
            a = a % b;
            if (a == 0)
            {
                sum--;
                break;
            }
        }
        else
        {
            sum += b / a;
            b = b % a;
            if (b == 0)
            {
                sum--;
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}