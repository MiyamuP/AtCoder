#include <iostream>
#include <string>
#include <cmath>
#define ll long long
using namespace std;
int main() {
	ll n;
	cin>>n;
	ll num = n;
	ll cnt=(ll)sqrt(n);
	for(ll i=2; i<=cnt; i++) {
		num += (n/i^2);
	}
	for()

	cout<<num<<endl;

	return 0;
}