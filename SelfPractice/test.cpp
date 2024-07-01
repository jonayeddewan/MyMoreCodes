#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x = 0;
    int y = 0;
    int z = 0;
	int n = 100;
    for(int i=1; i<=n; i++){
    	x++;
    	for(int j=1; j<=i; j++){
    		y++;
    		for(int k=1; k<=j; k++){
    			z++;
    		}
    	}
    }

    cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<x+y+z<<endl;
  
    return 0;
}