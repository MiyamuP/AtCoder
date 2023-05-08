#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
int main()
{
    ll h, w;
    cin >> h >> w;
    char s[h][w];
    char t[h][w];
    vector<string> ss(w);
    vector<bool> sb(w, true);
    vector<string> st(w);
    vector<bool> tb(w, true);
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> s[i][j];
            ss[j] += s[i][j];
        }
    }
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> t[i][j];
            st[j] += t[i][j];
        }
    }
    sort(ss.begin(), ss.end());
    sort(st.begin(), st.end());
    rep(i, w)
    {
        if (ss[i].compare(st[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}