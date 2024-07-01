#include<bits/stdc++.h>
#include<string.h>
using namespace std;
//constants :
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLK                             = (int) 700;
const int   max_number                      = (int) 1e9;
//data_type_compressions :
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     erase_duplicates(x)             x.erase(unique(all(x)),x.end());
#define     all(x)                          x.begin(),x.end()
#define     all_0(x)                        memset(x,0,sizeof(x))
#define     all_neg(x)                      memset(x,-1,sizeof(x))
#define     all_1(x)                        memset(x,1,sizeof(x))
//I/O :
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     PI                              acos(-1)
#define     isPrime(n)                      int isPrime(int n){if(n<=1) return 0;for(int i=2; i*i<=n; i++)if(n%i==0)return 0; return 0;}
#define     YES                             printf("YES\n");
#define     Yes                             printf("Yes\n");
#define     NO                              printf("NO\n");
#define     No                              printf("No\n");
#define     nl                              printf("\n");
//extras :
#define     e4                              int main()
#define     checkmate                       return 0;
#define     UNDEFINED                       0x3f
#define     INF                             LLONG_MAX
class Graph{
	int V;
	list<int>*l;
	
public:
	Graph(int v){
		V = v;
		l = new list<int>[V];
	}
	
	void addEdge(int i, int j, bool undir=true){
		 l[i].push_back(j);
		 if(undir){
		 	l[j].push_back(i);
		 }
	}
	
	void printAdjList(){
		for(int i=0; i<V; i++){
			cout<<i<<"--> ";
			for(auto node: l[i]){
				cout<<node<<",";
			}
			cout<<endl;
		}
	}
	
	void bfs(int source){
		queue<int>q;
		bool *visited = new bool[V]{0};
		
		q.push(source);
		visited[source] = true;
		
		while(!q.empty()){
			int f = q.front();
			cout<<f<<endl;
			q.pop();
			
			for(auto nbr:l[f]){
				if(!visited[nbr]){
					q.push(nbr);
					visited[nbr] = true;
				}
			}
		}
	}
};

e4{
    Faster;

   	Graph g(7);
   	
   	g.addEdge(0,1);
   	g.addEdge(1,2);
   	g.addEdge(2,3);
   	g.addEdge(3,5);
   	g.addEdge(5,6);
   	g.addEdge(4,5);
   	g.addEdge(0,4);
   	g.addEdge(3,4);
   	
   	g.bfs(1);
   	
   	//g.printAdjList();
   	
    //2010006
    checkmate;
}