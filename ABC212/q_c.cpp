#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    ll n, m;
    cin>>n>>m;
    ll a[n], b[m];
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }
    for(ll i=0; i<m; i++) {
        cin>>b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    ll an=0;
    ll bn=0;
    ll num=__LONG_LONG_MAX__;
    if(a[0]>b[m-1]) {
        num=a[0]-b[m-1];
    } else if(a[n-1]<b[0]) {
        num=b[0]-a[n-1];
    } else {
        while(1) {
            int tmp=a[an]-b[bn];
            if(tmp==0) {
                num=0;
                break;
            } else if(tmp>0) {
                if(num>llabs(tmp)) num=llabs(tmp);
                if(bn==m-1) break;
                bn++;
            } else if(tmp<0) {
                if(num>llabs(tmp)) num=llabs(tmp);
                if(an==n-1) break;
                an++;
            }
            //cout<<num<<endl;
        }
    }
    cout<<num<<endl;
    return 0;
}