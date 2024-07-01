#include <bits/stdc++.h>
using namespace std;

class Graph{
	
	int V;
	list<pair<int,int>>*l;
	
public:
	Graph(int v){
		V = v;
		l = new list<pair<int,int>> [V];
	}
	
	void addEdge(int u,int v, int wt, bool undir = true){
		
		l[u].push_back({v,wt});
		if(undir){
			l[v].push_back({u,wt});
		}
	}
	
	int prims_algo(){
		
		priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> q;
		bool *visited = new bool [V]{0};
		int ans = 0;
		
		
		q.push({0,0});
		
		while(!q.empty()){
			
			auto best = q.top();
			q.pop();
			int to = best.second;
			int wt = best.first;
			
			if(visited[to]){
				continue;
			}
			
			ans += wt;
			visited[to] = true;
			
			for(auto x:l[to]){
				if(!visited[x.first]){
					q.push({x.second,x.first});
				}
			}
			
		}
		return ans;
	}
};

int main(){
	
	int n,m;
	
	cin>>n>>m;
	
	Graph g(n);
	
	for(int i=1; i<=m; i++){
		int x,y,w;
		
		cin>>x>>y>>w;
		
		g.addEdge(x-1,y-1,w);
		
	}
	cout<<g.prims_algo()<<endl;
	
	return 0;
}