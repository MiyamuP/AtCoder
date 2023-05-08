#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    string ans;
    ll tn=1;


    //for(ll i=0; i<tn; i++) {
    while(n!=0) {
        ll a=n&1;
        if(a==1) {
            ans.push_back('A');
            ans.push_back('B');
        }else {
            ans.push_back('B');
        }
        n=n>>1;
    }
    ans.pop_back();

    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

    return 0;
}