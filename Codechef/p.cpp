#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    
    int ans = 0;
    int sum = 0;
    
    while(n--){
    	
    	int x,y;
            	
    	cin>>x>>y;
    	
    	sum -= x;
    	sum += y;
    	
    	ans = max(ans,sum);
    }
    
    cout<<ans<<endl;
  
    return 0;
}