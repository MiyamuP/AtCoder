#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    ll in[n];
    ll out[n];

    for(ll i=0; i<n; i++) {
        cin>>in[i];
        out[in[i]-1]=i;
    }

    for(ll i=0; i<n; i++) {
        cout<<out[i]+1<<" ";
    }
    cout<<endl;
    
    return 0;
}