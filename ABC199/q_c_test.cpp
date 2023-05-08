#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    int n;
    n=;

    string s;
    cin>>s;


    for(int i=0; i<3*pow(10, 5); i++) {
        //cin>>t[i]>>a[i]>>b[i];
        
            string tmp1, tmp2;

            tmp1=s.substr(n);
            tmp2=s.substr(0, n);

            s=tmp1+tmp2;

    }

    cout<<s<<endl;

    return 0;
}