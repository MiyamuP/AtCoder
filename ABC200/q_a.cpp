#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int num=n/100;
    if(n%100 != 0) {
        num++;
    }
    cout<<num<<endl;
    return 0;
}