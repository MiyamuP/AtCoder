#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int num=0;
    int date=0;
    while(num<n) {
        date++;
        num+=date;
    }
    cout<<date<<endl;
    return 0;
}