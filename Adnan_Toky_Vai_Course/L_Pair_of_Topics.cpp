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
    ll n;
    cin>>n;

    ll a[n];
    ll b[n];

    vector<ll>v;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>b[i];

        v.push_back(a[i]-b[i]);
    }
    
    sort(v.begin(),v.end());


    ll ans = 0;

    for(int j=0; j<n; j++)
    {
        ll x = b[j]-a[j];

        ll cnt = n - (upper_bound(v.begin(),v.end(),x)-v.begin());

        if(a[j]-b[j]>b[j]-a[j])
            cnt--;


        ans += cnt;
    }

    cout<<ans/2<<endl;

}
e4{
    Faster;

    int t=1;
    //cin>>t;

    while(t--)
    {
        solve();
    }
    //2010006
    checkmate;
}