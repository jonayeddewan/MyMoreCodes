#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2){
			for(int i=0; i<n; i++)
				cout<<1<<" ";
			cout<<endl;
		}
		else{
			for(int i=0; i<n-2; i++)
				cout<<2<<" ";
			cout<<1<<" "<<3<<endl;
		}
	}
	//2010006
	return 0;
}