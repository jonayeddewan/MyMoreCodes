
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll p, q;
        cin >> p >> q;

        if(p%q){
            cout << p << '\n';
            continue;
        }

        vector<int> div;
        int tmp = q;
        for(int i = 2; i*i <= q; i++){
            if(tmp%i==0){
                div.push_back(i);
                while(tmp%i==0) tmp /= i;
            }
        }
        if(tmp>1) div.push_back(tmp);

        ll ans = 1;

        for(int d: div){
            ll x = p;
            while(x%q==0){
                x /= d;
            }
            ans = max(ans, x);
        }

        cout << ans << '\n';
    }

    return 0;
}