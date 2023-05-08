#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin>>a>>b>>c;
    if(b>a && c>a) {
        cout<<b+c<<endl;
    } else if(a>b && c>b) {
        cout<<a+c<<endl;
    } else{
        cout<<a+b<<endl;
    }
    return 0;
}