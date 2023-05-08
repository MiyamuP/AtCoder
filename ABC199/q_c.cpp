#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin>>n;

    string s;
    cin>>s;

    int q;
    cin>>q;

    int t[q], a[q], b[q];

    int tf=0;

    for(int i=0; i<q; i++) {
        cin>>t[i]>>a[i]>>b[i];
        if(t[i]==1) {
            if(tf==1) {
                string tmp1, tmp2;

                tmp1=s.substr(n);
                tmp2=s.substr(0, n);

                s=tmp1+tmp2;
                tf=0;
            }
            char tmp;
            tmp = s[a[i]-1];
            s[a[i]-1] = s[b[i]-1];
            s[b[i]-1] = tmp;
        } else {
            if(tf==0){
                tf=1;
            } else if(tf==1) {
                tf=0;
            }
        }
    }

    if(tf==1) {
            string tmp1, tmp2;

            tmp1=s.substr(n);
            tmp2=s.substr(0, n);

        s=tmp1+tmp2;
    }

    cout<<s<<endl;

    return 0;
}