#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
    #endif

	long long n,d,cnt=0;
	cin>>n>>d;
	long long a[n];
	long mem = n;
	for(long i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i=0; i<n; i++)
	{
		int x = 1 + d/a[i];
		if(x<=mem)
		{
			mem -= x;
			cnt++;
		}
		else
			break;
	}
	cout<<cnt<<endl;

}
