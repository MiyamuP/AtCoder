#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n], b[n];

    int maxa=0;
    int minb=1000;

    for(int i=0; i<n; i++) {
        cin>>a[i];
        if (maxa<a[i]) {
            maxa=a[i];
        }
    }

    for(int i=0; i<n; i++) {
        cin>>b[i];
        if (minb>b[i]) {
            minb=b[i];
        }
    }

    int cnt=0;

    for(int i=maxa; i<=minb; i++) {
        cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}