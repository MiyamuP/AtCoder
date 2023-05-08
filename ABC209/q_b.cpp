#include <iostream>
using namespace std;
int main() {
    int n, x;
    cin>>n>>x;
    int a[n];
    int num=0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if((i+1)%2 == 0) {
            num+=a[i] - 1;
        } else {
            num+=a[i];
        }
    }
    if(num<=x) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    return 0;
}