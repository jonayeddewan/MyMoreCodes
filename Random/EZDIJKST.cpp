#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
#define vll vector<ll>
using namespace std;
const long long N = 1e6+5;
vector<pll>adj[N];
ll dist[N];
int n,m,k;
void dijkstra(int s,int end){
	priority_queue<pll,vector<pll>,greater<>>PQ;
	PQ.push({0,s});
	dist[s]=0;

	while(!PQ.empty()){
		ll u = PQ.top().second, c = PQ.top().first;
		PQ.pop();

		if(c!=dist[u])
			continue;
		for(auto i : adj[u]){
			ll v = i.first, cost = i.second;
			if(dist[v]>cost + c){
				dist[v] = cost + c;
				PQ.push({dist[v],v});
			}
		}
	}
	if(dist[end]>k)
		cout<<"NO"<<endl;
	else
		cout<<dist[end]<<endl;
}
void solve(){
	ll n,m,k,x,y;
	cin>>n>>m>>k;
	ll u,v;
	cin>>u>>v;
	for(int i=1; i<=n; i++)
	{
		dist[i]=1e18;
		adj[i].clear();
	}
	for(ll i=0; i<m; i++)
	{
		ll u,v,c;
		cin>>u>>v>>c;
		adj[u].push_back({v,c});
	}
	dijkstra(u,v);
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        int t;
        cin>>t;
        while(t--)
        {
        	solve();
        }

    return 0;
}
