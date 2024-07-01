#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
    #endif

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,b,s;
		cin>>n>>k>>b>>s;
		vector<ll>v(n);
		v[0] = k*b;
		s -= k*b;
		if(s<0)
			cout<<-1<<endl;
		else
		{
			for(ll i=0; i<n; i++)
			{
				v[i] += min(k-1,s);
				s -= min(k-1,s);
			}
			if(s>0)
				cout<<-1<<endl;
			else
			{
				for(ll i=0; i<n; i++)
					cout<<v[i]<<" ";
				cout<<endl;
			}
		}
	}
	return 0;
}
