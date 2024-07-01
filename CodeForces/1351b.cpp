#include <bits/stdc++.h>
using namespace std;
int t;
void solve(){
    int a, b, a2, b2;
    cin >> a >> b >> a2 >> b2;
    if (a == a2 && b+b2 == a){
        cout << "YES\n";
    }
    else if (a == b2 && b+a2 == a){
        cout << "YES\n";
    }
    else if (b == b2 && a+a2 == b){
        cout << "YES\n";
    }
    else if (b == a2 && a+b2 == b){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
int main(){
    cin >> t;
    while (t--){
        solve();
    }
    //2010006
    //junayed
}