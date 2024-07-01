#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    int a[n+1];
    a[0] = 0;

    int pre[n+1];
    int suff[n+1];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    pre[0] = 0;
    suff[n+1] = 0;
    int x = 0;
    for(int i=1; i<=n; i++)
    {
        x = __gcd(x,a[i]);
        pre[i] = x;
    }
    x = 0;
    for(int i=n; i>=1; i--)
    {
        x = __gcd(x,a[i]);
        
        suff[i] = x;
    }

    int ans = 0;

    for(int i=1; i<=n; i++)
    {
        ans = max(ans,__gcd(pre[i-1],suff[i+1]));
    }

    cout<<ans<<endl;


}
