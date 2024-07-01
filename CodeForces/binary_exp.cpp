#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1e9+7;

ll binaryExponential(ll a, ll b){
	
	ll result = 1;
	
	while(b){
		
		if(b&1){
			result = (result*a)%mod;
		}
		
		a = (a*a)%mod;
		b /= 2;
	}
	
	return result;
}

int main(){
	
	ll a,b;
	
	cin>>a>>b;
	
	cout<<binaryExponential(a,b)<<endl;
}