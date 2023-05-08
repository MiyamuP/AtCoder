#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main() {
    ll h, w, n;
    cin>>h>>w>>n;
    ll a[n], b[n];
    //cout<<"0"<<endl;
    bool hf[h];
    bool wf[w];
    //cout<<"1"<<endl;
    for(ll i=0; i<h; i++) hf[i]=false;
    for(ll i=0; i<w; i++) wf[i]=false;
    //cout<<"2"<<endl;
    for(ll i=0; i<n; i++) {
        cin>>a[i]>>b[i];
        hf[a[i]-1]=true;
        wf[b[i]-1]=true;
    }
    //cout<<"3"<<endl;

    ll ha[h], wa[w];
    ll hi=0;
    ll wi=0;

    for(ll i=0; i<h; i++) {
        if(hf[i]) {
            ha[i]=hi;
            hi++;
        }
    }
    //cout<<"4"<<endl;

    for(ll i=0; i<w; i++) {
        if(wf[i]) {
            wa[i]=wi;
            wi++;
        }
    }
    //cout<<"5"<<endl;

    for(ll i=0; i<n; i++) {
        cout<<ha[a[i]-1]+1<<" "<<wa[b[i]-1]+1<<endl;
    }
    return 0;
}