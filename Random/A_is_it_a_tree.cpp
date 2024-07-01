#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int N=2e4+10;
vector<int> adj[N];
bool vis[N];
int n,m;
 
void dfs(int src)
{
    vis[src]=1;
 
    for(auto v:adj[src]){
        if(!vis[v]){
 
            dfs(v);
        }
 
    }
}
 
int main()
{
    int u,v;
 
    cin>>n>>m;
    int edge=m;
 
    while(m--){
 
        cin>>u>>v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
 
    }
 
 
    int dfsCount=0;
     
    memset(vis,0,sizeof(vis));
 
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
 
            dfs(i);
            dfsCount++;
        }
    }
 
    if(dfsCount==1 && edge==n-1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
 
}