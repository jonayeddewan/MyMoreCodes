#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf = 1000000000000000000;
vector<pair<ll,ll>>adj[100005];
void dijkstra(ll source, ll node)
{
    map<ll,ll>mp;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    vector<ll> dis(node+10,inf);
    dis[source]=0;
    pq.push(make_pair(0,source));
    while(!pq.empty())
    {
        ll parent_weight = pq.top().first;
        ll parent_node = pq.top().second;
        pq.pop();
        for(auto x:adj[parent_node])
        {
            ll child_node = x.first;
            ll child_weight = x.second;
            if(parent_weight > dis[parent_node])
            continue;

            if(dis[child_node]> child_weight + parent_weight)
            {
                mp[child_node] = parent_node;
                dis[child_node] = child_weight + parent_weight;
                pq.push(make_pair(dis[child_node],child_node));
            }

        }
    }
    ll n = node;

    if(mp[n] == 0)
    {
        cout<<-1<<"\n";
    }
    else
    {
        vector<ll>final;
        mp[1] = -1;

        while(n != -1)
        {
            final.push_back(n);
            n = mp[n];
        }

        reverse(final.begin(), final.end());

        for(auto x: final)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}   
void solve()
{
    ll source_node,node, edge,a,b,weight,i;
    cin>>node>>edge;

    for(int i=1; i<=edge; i++)
    {
        cin>>a>>b>>weight;
        adj[a].push_back({b,weight});
        adj[b].push_back({a,weight});
    }

    dijkstra(1,node);
}
int main()
{
    ll t = 1; //cin>>t;

    while(t--)
    {
        solve();
    }
}