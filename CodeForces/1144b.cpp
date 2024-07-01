#include <bits/stdc++.h>
using namespace std;

int n, a[2005];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n); // sort the array in ascending order
    int i = 0, j = n - 1, last = 0, sum = 0;
    while (i <= j) {
        if (last % 2 == 0) {
            if (a[j] % 2 == 1) {
                last = a[j];
                sum += a[j];
                j--;
            } else {
                break;
            }
        } else {
            if (a[i] % 2 == 0) {
                last = a[i];
                sum += a[i];
                i++;
            } else {
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
