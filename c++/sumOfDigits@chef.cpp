#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int sum=0;
		while(n!=0){
			sum+=n%10;
			n/=10;
		}
		cout<<sum<<"\n";
	}
}
