#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    ll h, w, n;
    cin>>h>>w>>n;
    ll a[n], b[n];
    ll hi=1;
    ll wi=1;
    vector<ll> hf;
    map<ll, ll> hm;
    //vector<ll>::iterator h_itr = hf.begin();
    vector<ll> wf;
    map<ll, ll> wm;

    //vector<ll>::iterator w_itr = wf.begin();
    for(ll i=0; i<n; i++) {
        cin>>a[i]>>b[i];
        if(hm.count(a[i])==0){
            hf.push_back(a[i]);
            hm.insert(make_pair(a[i], hi));
            hi++;
        }

        if(wm.count(b[i])==0) {
            wf.push_back(b[i]);
            wm.insert(make_pair(b[i], wi));
            wi++;
        }
    }
    sort(hf.begin(), hf.end());
    sort(wf.begin(), wf.end());

    for(ll i=0; i<n; i++) {
        cout<<hm[hf[i]]<<" "<< wm[wf[i]]<< endl;
    }

    return 0;
}