#include <iostream>
#include <list>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    int a[m], b[m];
    for(int i=0; i<m; i++) {
        cin>>a[i]>>b[i];
    }

    int sum=n+m;

    int s[2000][2000];

    //list<int> s[2001];

    for(int i=0; i<2000; i++) {
        for(int j=0; j<2000; j++) {
            s[i][j]=0;
        }
    }

    for(int i=0; i<m; i++) {
        s[a[i]-1][b[i]-1]=1;
    }

    /*for(int i=0; i<m; i++) {
        s[a[i]].push_back(b[i]);
    }*/

    cout<<sum<<endl;
    return 0;
}