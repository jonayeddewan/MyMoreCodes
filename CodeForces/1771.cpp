#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;      cin>>t;
    while(t--)
    {
        ll n;      cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll maxcnt = 0;
        ll mincnt = 0;
        ll maxi = a[n-1];
        ll mini = a[0];
        for(int i=0; i<n; i++)
        {
            if(a[i]==maxi)
                    maxcnt++;
            if(a[i]==mini)
                    mincnt++;
        }
        if(mincnt==n)
            cout<<n*(n-1)<<endl;
        else
        cout<<(maxcnt*2)*mincnt<<endl;   
    }
    //2010006
    return 0;
}