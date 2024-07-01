#include <iostream>
 
using namespace std;
 
int recon (int a[], int n, int d) {
    int count=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i==j) continue;
            if ((a[i]-a[j])<=d&&(a[i]-a[j])>=-d) {
                count ++;
            }
        }
    }
    return count;
}
 
int main () {
    int n, d;
    cin >> n>>d;
    int a[999];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int re=recon(a,n,d);
    cout << re;
 return 0;
 //2010006
}