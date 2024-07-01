#include<bits/stdc++.h>
using namespace std;

int store[20];
bitset<9>x;

void permutation(vector<int>&v, int index, int n)
{
	if(index==n)
	{
		for(int i=0; i<n; i++)
		{
			if(i>0)
			{
				cout<<" ";
			}
			cout<<store[i];
		}
		cout<<endl;
		
		return;
	}
	
	for(int i=0; i<n; i++)
	{
		if(!x[i])
		{
			x[i] = 1;
			store[index] = v[i];
			permutation(v,index+1,n);
			x[i] = 0;
		}
	}
}
int main()
{
	int n;	cin>>n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		v[i] = i+1;
	}
	permutation(v,0,n);
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;	cin>>n;
	
// 	vector<int>v(n);
	
// 	for(int i=0; i<n; i++)
// 	{
// 		v[i] = i+1;
// 	}
	
// 	do
// 	{
// 		for(int i=0; i<n; i++)
// 		{
// 			if(i>0)
// 			{
// 				cout<<' ';
// 			}
// 			cout<<v[i];
// 		}
// 		cout<<endl;
// 	}
// 	while(next_permutation(v.begin(),v.end()));
// }