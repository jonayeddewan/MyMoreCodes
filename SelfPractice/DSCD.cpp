#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
map<ll,int>mp;
vector<ll>v;
void divisor(ll n)
{
	ll sq = (ll)sqrt(n);
	
	for(int i=1; i<=sq; i++)
	{
		if(n%i==0)
		{
			if(i!=sq)
			{
				mp[i]++;
				mp[n/i]++;
				if(mp[i]==2)
					v.push_back(i);
				if(mp[n/i]==2)
					v.push_back(n/i);
			}
			else
			{
				mp[i]++;
				if(mp[i]==2)
					v.push_back(i);
			}
		}
	}
}
bool isPrime(ll n)
{
	ll x = (ll)sqrt(n);
	
	for(int i=2; i<=x; i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	FastIO;
	ll a,b;
	cin>>a>>b;
	
	divisor(a);
	divisor(b);
	
	ll cnt = 0;
	
	for(int i=0; i<v.size(); i++)
	{
		if(isPrime(v[i]))
			cnt++;
	}
	
	cout<<cnt<<"\n";
	
}