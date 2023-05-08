#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll n, q;
    cin >> n >> q;
    vector<bool> nf(n + 1, false);
    ll nn = 1;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    rep(i, q)
    {
        int e;
        cin >> e;
        switch (e)
        {
        case 1:
            pq.push(nn);
            nn++;
            break;

        case 2:
            ll x;
            cin >> x;
            nf[x] = true;
            break;
        case 3:
            while (nf[pq.top()])
            {
                pq.pop();
            }
            cout << pq.top() << endl;
            break;

        default:
            break;
        }
    }

    return 0;
}