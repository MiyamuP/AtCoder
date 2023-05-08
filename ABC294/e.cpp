#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll l, n1, n2;
    cin >> l >> n1 >> n2;
    vector<ll> u1(n1), l1(n1), u2(n2), l2(n2);
    rep(i, n1)
    {
        cin >> u1[i] >> l1[i];
    }
    rep(i, n2)
    {
        cin >> u2[i] >> l2[i];
    }
    ll dis = 0;
    ll ans = 0;
    ll no = 0;
    ll non1 = 0;
    ll non2 = 0;

    do
    {
        // cout << "dis" << dis << endl;
        // cout << "no" << no << endl;
        if (dis == 0)
        {
            dis = l1[non1];
            no = u1[non1];
            non1++;
        }
        else if (dis > 0)
        {

            if (no == u2[non2])
            {
                ans += min(dis, l2[non2]);
                // cout << ans << endl;
            }
            dis -= l2[non2];

            if (dis < 0)
            {
                no = u2[non2];
            }
            non2++;
        }
        else
        {

            if (no == u1[non1])
            {

                ans += min(dis * -1, l1[non1]);
                // cout << ans << endl;
            }
            dis += l1[non1];

            if (dis > 0)
            {
                no = u1[non1];
            }
            non1++;
        }
    } while (non1 < n1 || non2 < n2);
    cout << ans << endl;
    return 0;
}