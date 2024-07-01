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

//list<int>*l = new list<int>[10005];
class Graph
{
    int V;
    list<int> *l;
    bool *visited;

public:
    Graph(int n)
    {
        V = n;
        l = new list<int>[V];
        visited = new bool[V]{0};
    }

    void addEdge(int u, int x, int n)
    {

        if (x == 0)
        {
            l[u].push_back(n + 1);
        }
        else
        {
            l[n + 1].push_back(u);
        }
    }

    void addEdge1(int u)
    {

        l[u].push_back(u + 1);
    }

    void bfs(int src)
    {
        queue<int> q;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            int f = q.front();
            cout << f << " ";
            q.pop();

            for (auto x : l[f])
            {
                if (!visited[x])
                {
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
    }

    void solve(int n, Graph g)
    {

        int a[n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++)
        {
            g.addEdge1(i);
        }

        for (int i = 1; i <= n; i++)
        {
            g.addEdge(i, a[i], n);
        }

        for (int i = 1; i <= n + 1; i++)
        {
            if (!visited[i])
                g.bfs(i);
        }

        // cout<<endl;

        // for(int i=1; i<=n+1; i++){
        // 	for(auto x: l[i]){
        // 		cout<<i<<"-->"<<x<<" ";
        // 	}
        // 	cout<<endl;
        // }
    }
};

e4
{
    Faster;

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        Graph g(n);

        g.solve(n,g);
    }
    // 2010006
    checkmate;
}