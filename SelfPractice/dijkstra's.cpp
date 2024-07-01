#include<bits/stdc++.h>
using namespace std;

class Graph{
	
	int V;
	list<pair<int,int>> *l;
	
	
public:
	Graph(int v){
		V = v;
		l = new list<pair<int,int>>[V];
	}
	
	void addEdge(int u, int v, int wt, bool undir = true){
		l[u].push_back({wt,v});
		if(undir){
			l[v].push_back({wt,u});
		}
	}
	
	int dijkstra(int src, int dest){
		
		vector<int> cost(V, INT_MAX);
		set<pair<int,int>>s;
		
		
		cost[src] = 0;
		s.insert({0,src});
		
		
		while(!s.empty()){
			
			auto it = s.begin();
			int node = it->second;
			int costTillNow = it->first;
			
			s.erase(it);
			
			for(auto nbrPair : l[node]){
				
				int nbr = nbrPair.second;
				int currentEdge = nbrPair.first;
				
				if(costTillNow+currentEdge<cost[nbr]){
					
					auto f = s.find({cost[nbr],nbr});
					
					if(f!=s.end()){
						s.erase(f);
					}
					
					cost[nbr] = costTillNow + currentEdge;
					s.insert({cost[nbr],nbr});
				}
			}
		}
		for(int i=0; i<V; i++){
			cout<<"Node "<<i <<" Cost "<<cost[i]<<endl;
		}
		
		return cost[dest];
		
	}
	
};
int main()
{
	Graph g(5);
	
	g.addEdge(0,1,1);
	g.addEdge(1,2,1);
	g.addEdge(0,2,4);
	g.addEdge(0,3,7);
	g.addEdge(3,2,2);
	g.addEdge(3,4,3);
	
	
	int c = g.dijkstra(0,4);
	
	cout<<c<<endl;
	
}