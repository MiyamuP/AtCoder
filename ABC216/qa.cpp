#include <iostream>
using namespace std;
int main() {
    double n;
    cin>>n;

    int x=n;

    int y=(n*10-x*10);

    if(y>=0 && y<=2) {
        cout<<x<<'-'<<endl;
    } else if(y>=3 && y<=6) {
        cout<<x<<endl;
    } else {
        cout<<x<<'+'<<endl;
    }

    return 0;
}