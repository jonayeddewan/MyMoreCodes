#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,i,j=0;
        cin>>n;
        vector<int>v1(n),v2(n);
        for(int i=0; i<n; i++)
        {
            cin>>v1[i];
            v2[i]=v1[i];
        }
        sort(v2.begin(),v2.end());
        for(int i=0; i<n; i++)
        {
            if(v1[i]!=v2[i])
                cnt++;
            else
                continue;
        }
        cout<<cnt/2<<endl;
    }
    return 0;
}
