#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;

    if(x==0) {
        if(y==0){
            cout<<0<<endl;
        } else if(y==1) {
            cout<<2<<endl;
        } else if(y==2) {
            cout<<1<<endl;
        }
    } else if(x==1) {
        if(y==0) {
            cout<<2<<endl;
        } else if(y==1) {
            cout<<1<<endl;
        } else if(y==2) {
            cout<<0<<endl;
        }
    } else if(x==2) {
        if(y==0) {
            cout<<1<<endl;
        } else if(y==1) {
            cout<<0<<endl;
        } else if(y==2) {
            cout<<2<<endl;
        }
    }
    return 0;
}