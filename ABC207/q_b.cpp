#include <iostream>
using namespace std;
int main() {
    long long a, b, c, d;
    cin>>a>>b>>c>>d;
    long long num=0;
    long long r_num=0;
    if(b>=c*d) {
        cout<<-1<<endl;
    } else {
        while(a>r_num*d) {
            num++;
            a+=b;
            r_num+=c;
        }
        cout<<num<<endl;
    }
    return 0;
}