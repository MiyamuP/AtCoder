#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ocnt=0;
    int qcnt=0;
    for(int i=0; i<=9; i++) {
        if(s[i]=='o'){
            ocnt++;
        } else if(s[i]=='?') {
            qcnt++;
        }
    }


    if(ocnt>4) {
        cout<<"0"<<endl;
    } else if(ocnt==4) {
        int num=1;
        for(int i=1; i<=4; i++) {
            num*=i;
        }
        cout<<num<<endl;
    } else if(ocnt==3) {
        int num1=1;
        for(int i=1; i<=3; i++) {
            num1*=i;
        }
        int num=num1*4*qcnt+num1*2*3;
        cout<<num<<endl;

    } else if(ocnt==2) {
        int num=14+24*qcnt+2*6*pow(qcnt, 2);
        cout<<num<<endl;
    } else if(ocnt==1) {
        int num=1+(4*qcnt)+(6*pow(qcnt, 2))+(4*pow(qcnt, 3));
        cout<<num<<endl;
    } else if(ocnt==0) {
        int num=pow(qcnt, 4);
        cout<<num<<endl;
    }
    return 0;
}