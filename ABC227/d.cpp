#include <iostream>
#include <functional>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
	ll n, k;
	cin>>n>>k;
	ll a[n];
	if(k==1){
		cout<<n<<endl;
		return 0;
	}
	for(ll i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n, greater<ll>());

	if(n==k){
		cout<<a[n-1]<<endl;
		return 0;
	}

	ll num=0;
	bool f=false;

	while(1){
		
	}
	cout<<num<<endl;
	return 0;
}