#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s[n];
	bool q[n];
	int num=0;

	for(int i=0; i<n; i++) {
		cin>>s[i];
		q[i]=false;
		for(int a=1; a<=1000; a++) {
			for(int b=1; b<=1000; b++) {
				if(((4*a*b)+(3*a)+(3*b))==s[i]){
					q[i]=true;
				}
			}
		}
		if(!q[i]){
			num++;
		}
	}
	cout<<num<<endl;
	return 0;
}