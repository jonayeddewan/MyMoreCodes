#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n,m,x,y,d,t,a=1,b=1;
    cin>>t;
    while(t--)
    {
    	cin>>n>>m>>x>>y>>d;
    	int k1=min(x-1,m-y);
    	int k2=min(y-1,n-x);
    	if(k1>d||k2>d) cout<<n+m-2<<"\n";
    	else cout<<-1<<"\n";
    }
}
