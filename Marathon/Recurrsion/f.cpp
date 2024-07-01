#include <bits/stdc++.h>
using namespace std;
void recursion2(int n)
{
	if(n<1)
	{
		return;
	}
	cout<<n;
	recursion2(n-1);
}
void recursion(int n)
{
	if(n>9)
	{
		n--;
		cout<<n;
		recursion2(n-1);
		return;
	}
	cout<<n;
	recursion(n+1);

	
}
int main()
{
	int n;		cin>>n;
	
	recursion(n);
}