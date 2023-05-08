#include <iostream>
#include <set>
#include <map>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n, q;
    cin >> n >> q;
    map<ll, multiset<ll>> bo;
    map<ll, set<ll>> nu;
    rep(r, q)
    {
        int qu;
        cin >> qu;
        ll i, j;
        switch (qu)
        {
        case 1:

            cin >> i >> j;
            bo[j].insert(i);
            nu[i].insert(j);
            break;
        case 2:
            cin >> i;
            for (auto itr = bo[i].begin(); itr != bo[i].end(); itr++)
            {
                cout << *itr << " ";
            }
            cout << endl;
            break;
        case 3:
            cin >> i;
            for (auto itr = nu[i].begin(); itr != nu[i].end(); itr++)
            {
                cout << *itr << " ";
            }
            cout << endl;
            break;

        default:
            break;
        }
    }
    return 0;
}