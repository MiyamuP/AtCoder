#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s[n], t[n];
    for(int i=0; i<n; i++) {
        cin>>s[i]>>t[i];
    }
    bool f=false;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(s[i].compare(s[j])==0 && t[i].compare(t[j])==0 && i!=j) f=true;
        }
    }
    if(f) {
        cout<<"Yes"<<endl;
    } else{
        cout<<"No"<<endl;
    }
    
    return 0;
}