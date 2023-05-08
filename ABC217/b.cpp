#include <iostream>
#include <string>
using namespace std;
int main() {
    string s[3];
    cin>>s[0]>>s[1]>>s[2];
    bool abcf=true;
    bool arcf=true;
    bool agcf=true;
    bool ahcf=true;

    for(int i=0; i<3; i++) {
        if(s[i].compare("ABC")==0) {
            abcf=false;
        } else if(s[i].compare("ARC")==0) {
            arcf=false;
        } else if(s[i].compare("AGC")==0) {
            agcf=false;
        } else if(s[i].compare("AHC")==0) {
            ahcf=false;
        }
    }
    if(abcf) {
        cout<<"ABC"<<endl;
    } else if(arcf) {
        cout<<"ARC"<<endl;
    } else if(agcf) {
        cout<<"AGC"<<endl;
    } else if(ahcf) {
        cout<<"AHC"<<endl;
    }
    
    return 0;
}