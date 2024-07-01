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

ll fact[N];

ll powerMod(ll a, ll b){
    if(b==0) return 1;

    if(b%2==0){
        ll x = powerMod(a, b/2);
        return (x*x)%mod;
    }
    else {
        ll x = powerMod(a, b/2);
        return ((x*x)%mod * a)%mod;
    }

    return 0;
}

ll inverseMod(ll a){
    return powerMod(a, mod-2);
}

ll nCrMod(ll n, ll r){
    if (r == 0)
        return 1;
    if (r > n)
        return 0;
    
    return (fact[n] * inverseMod((fact[r] * fact[n - r]) % mod)) % mod;
}

e4{
    Faster;

    fact[0] = 1;
    for(int i = 1; i < N; i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    
    ll n, k;
    cin >> n >> k;

    for(int i = 1; i <= k; i++){
        ll ans = (nCrMod(n-k+1, i)*nCrMod(k-1, i-1))%mod;
        cout << ans << '\n';
    }
    //2010006
    checkmate;
}