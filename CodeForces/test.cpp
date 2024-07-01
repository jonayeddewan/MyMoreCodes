#include<bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		if(n == k) cout << "1\n";
		else if(n > k){
			if(n % k == 0) cout << "1\n";
			else cout << "2\n";
		}
		else {
			cout << (int)ceil((float)k / n) << '\n';
		}
	}
	return 0;
}
