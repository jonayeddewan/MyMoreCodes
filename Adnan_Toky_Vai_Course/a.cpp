#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	for(int i=1; i<=t; i++)
	{
		int n;
		cin>>n;
	
		int a[n];
	
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
	
		int cnt = 0;
		int ans = 0;
		if(a[i]==n)
		{
			for(int j=0; j<n; j++)
			{
				if(a[j]==a[i])
					cnt++;
			}
		}
		else if(a[i]<n)
		{
			for(int j=0; j<n; j++)
			{
				if(a[j]==a[i])
					cnt++;	
			}
		}
		else
		{
			cout<<-1<<endl;
			break;
		}
		
		if(cnt<n)
			cout<<n-cnt<<endl;
		else if(cnt==n)
			cout<<-1<<endl;
		
	}
	
}