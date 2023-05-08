#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    cin>>x;
    if((x[3]-x[2]==1 && x[2]-x[1]==1 && x[1]-x[0]==1) || x[3]==x[2] && x[2]==x[1] && x[1]==x[0]) {
        cout<<"Weak"<<endl;
    } else if(x[0]=='9' && x[1]=='0' && x[2]=='1' && x[3]=='2'){
        cout<<"Weak"<<endl;
    } else if(x[0]=='8' && x[1]=='9' && x[2]=='0' && x[3]=='1'){
        cout<<"Weak"<<endl;
    } else if(x[0]=='7' && x[1]=='8' && x[2]=='9' && x[3]=='0'){
        cout<<"Weak"<<endl;
    } else{
        cout<<"Strong"<<endl;
    }
    return 0;
}