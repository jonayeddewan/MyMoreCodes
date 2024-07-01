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
void solve()
{
    int n;
    
    cin>>n;
    
    vector<int>v;
    
    int x;
    
    for(int i=0; i<n; i++){
    	
    	cin>>x;
    	
    	v.push_back(x);
    }
    
    bool ok = true;
    
    stack<int>a;
    
    int p;
    
    while(ok){
    	
    	if(v.front()<=v.back()){
    		
    		if(!a.empty()){
    			
    			if(a.top()<=v.front()){
                    
                    p = v.front();
    				
    				a.push(p);
    		
    				v.erase(v.begin());
                    
    			}
    			else{
    				
    				ok = false;
    			}
    		}
    		else{
    		
                p = v.front();
    			a.push(p);
    		
    			v.erase(v.begin());
    		}
    		
    		
    	}
    	else if(v.back()<=v.front()){
    		
    		if(!a.empty()){
    			
    			if(a.top()<=v.back()){
                    
                    p = v.back();
    				
    				a.push(p);
    		
    				v.pop_back();
    				
    			}
    			else{
    				
    				ok = false;
    			}
    		}
    		else{
                
                p = v.back();
    			
    			a.push(p);
    		
    			v.pop_back();
    		}
    		
    	}
    }
    
    cout<<v.size()-a.size()<<endl;
    
}
e4{
    Faster;

    int t=1;
    cin>>t;

    while(t--)
    {
        solve();
    }
    //2010006
    checkmate;
}