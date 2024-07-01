#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		long long int p,q,x,y,tl;
		x = n/2;
		y = 2*(m-1);
		p = n*n * m;
		q = x*x* y;
		tl = p-q;
		cout<<tl<<endl;
	}
}