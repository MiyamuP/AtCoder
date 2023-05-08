#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define ll long long
int main() {
    ll q;
    cin>>q;
    vector<ll> out;
    vector<ll> bag1;
    map<ll, ll> bag2;
    ll subnum=0;
    ll binum=0;
    ll oinum=0;
    for(ll i=0; i<q; i++) {
        int p;
        cin>>p;
        cout<<p;
        if(p==1) {
            ll x;
            cin>>x;
            bag1.insert(binum, x-subnum);
            binum++;
            bag2.insert(x-subnum, subnum);
            binum++;
        } else if(p==2) {
            ll x;
            cin>>x;
            subnum+=x;
        } else if(p==3) {
            sort(bag1.begin(), bag1.end());
            out.insert(bag1[0]+(bag2[bag1[0]]));
            bag2.erase(bag1.begin());
            bag1.erase(bag1.begin());
            binum--;
        }
    }
    for(ll n: out) {
        cout<<n<<end;
    }
    return 0;
}