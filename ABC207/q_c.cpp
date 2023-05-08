#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int t[n], l[n], r[n];
    for(int i=0; i<n; i++) {
        cin>>t[i]>>l[i]>>r[i];
    }
    int num=0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            
            if(t[i] == 1) {
                if(t[j] == 1) {
                    if(l[i]<=r[j] && r[i]>=l[j]) num++;
                } else if(t[j] == 2) {
                    if(l[i]<r[j] && r[i]>=l[j]) num++;
                } else if(t[j] == 3) {
                    if(l[i]<=r[j] && r[i]>l[j]) num++;
                } else if(t[j] == 4) {
                    if(l[i]<r[j] && r[i]>l[j]) num++;
                }
            } else if(t[i] == 2) {
                if(t[j] == 1) {
                    if(l[i]<=r[j] && r[i]>l[j]) num++;
                } else if(t[j] == 2) {
                    if(l[i]<r[j] && r[i]>l[j]) num++;
                } else if(t[j] == 3) {
                    if(l[i]<=r[j] && r[i]>l[j]) num++;
                } else if(t[j] == 4) {
                    if(l[i]<r[j] && r[i]>l[j]) num++;
                }
            } else if(t[i] == 3) {
                if(t[j] == 1) {
                    if(l[i]<r[j] && r[i]>=l[j]) num++;
                } else if(t[j] == 2) {
                    if(l[i]<r[j] && r[i]>=l[j]) num++;
                } else if(t[j] == 3) {
                    if(l[i]<r[j] && r[i]>l[j]) num++;
                } else if(t[j] == 4) {
                    if(l[i]<r[j] && r[i]>l[j]) num++;
                }
            } else if(t[i] == 4) {
                if(l[i]<r[j] && r[i]>l[j]) num++;
            }
        }
    }
    cout<<num<<endl;
    return 0;
}