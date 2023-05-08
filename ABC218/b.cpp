#include <iostream>
using namespace std;
int main() {
    int p[26];
    for(int i=0; i<26; i++) {
        cin>>p[i];
    }
    for(int i=0; i<26; i++) {
        char ans='a'+p[i]-1;
        cout<<ans;
    }
    cout<<endl;
    return 0;
}