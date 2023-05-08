#include <iostream>
using namespace std;
int main() {
    long long p;
    cin>>p;
    long long num=0;
    while(p!=0) {
        long long c=1;
        long long tnum=1;
        while(p>=tnum) {
            c++;
            tnum*=c;
        }
        tnum/=c;
        p-=tnum;
        num++;
    }
    cout<<num<<endl;
    return 0;
}
