#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int Max = 1e5+10;
int res[Max];
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
    	int n,x;
    	cin>>n;
    	set<int>s;
    	for(int i=1; i<=n; i++)
    	{
    		cin>>x;
    		if(i==n)
    		{
    			res[x]=0;
    		}
    		else
    		{
    			res[x]=i;
    		}
    	}
    	for(int i=1; i<=n; i++)
    	{
    		cout<<res[i]+1<<" ";
    	}
    	cout<<endl;
    	
    }
    return 0;
}
