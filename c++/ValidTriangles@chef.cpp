#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t,a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(a>0){
			if(b>0){
				if(c>0){
					if(a+b+c==180)
					cout<<"YES\n";
					else cout<<"NO\n";
				}
				else cout<<"NO\n";
			}
			else cout<<"NO\n"; 
		}
		else cout<<"NO\n";
	}
}
