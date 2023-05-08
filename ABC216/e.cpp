#include <iostream>
#include <queue>
using namespace std;
#define ll long long
int main() {
    ll n, k;
    cin>>n>>k;
    priority_queue<ll> a;
    for(ll i=0; i<n; i++) {
        ll tmp;
        cin>>tmp;
        a.push(tmp);
    }

    ll num=0;

    for(ll i=0; i<k; i++) {
        ll tmp=a.top();
        num+=tmp;

        a.pop();
        a.push(tmp-1);
        if(a.top()==0) break;
    }

    cout<<num<<endl;

    return 0;
}