#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a<=b && 6*a>=b) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    return 0;
}