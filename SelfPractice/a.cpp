#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	
	long long int a[x],b[y];
	long long int ans[100005];
	
	
	for(int i=0; i<x; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0; i<y; i++)
	{
		cin>>b[i];
	}
	
	sort(a, a + x, greater<int>());
	
	int cnt = 0;
	int i,j;
	for(i=0, j=x-1; i<y, j>=0;)
	{
		if(b[i]>a[j])
		{
			cnt++;
			ans[i] = cnt;
			j--;
		}
		else
		{
			
			ans[i] = cnt;
			i++;
		}
	}
	for(int k=i; k<y; k++)
	{
		ans[k] = cnt;
	}
	
	for(int i=0; i<y; i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	
}