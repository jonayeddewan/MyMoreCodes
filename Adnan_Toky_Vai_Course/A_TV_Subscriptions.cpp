#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,d;
    cin>>n>>k>>d;
    unordered_map<int,int>x;


    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int l = 0,r=0, ans = INT32_MAX;
    while(r<n)
    {
        x[a[r++]]++;

        if(r-l==d)
        {
            ans = min(ans,int(x.size()));
            if(x[a[l]]==1)
                x.erase(a[l]);
            else
                x[a[l]]--;

            l++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    
    //2010006
    return 0;
}