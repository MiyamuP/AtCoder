#include <iostream>
using namespace std;
int main(){
	int n, k, a;
	cin>>n>>k>>a;
	int num=a;
	for(int i=1; i<=k; i++) {
		if(i!=1)num++;
		if(num>n){
			num=1;
		}
		
	}
	cout<<num<<endl;
	return 0;
}