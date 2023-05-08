#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    int t[n];

    int maxt=0;
    int maxs=0;
    int secondt=0;
    int seconds=0;

    for(int i=0; i<n; i++) {
        cin>>s[i]>>t[i];
        if(secondt<t[i]){
            secondt=t[i];
            seconds=i;
            if(maxt<t[i]) {
                seconds=maxs;
                secondt=maxt;

                maxt=t[i];
                maxs=i;
            }
        }
    }

    cout<<s[seconds]<<endl;
}