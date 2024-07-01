#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<tuple<int,int,int>> ops;

        for (int bit = 0; bit < 31; bit++) {
            int rangeStart = 1, rangeEnd = 0;
            for (int j = 0; j < n; j++) {
                if ((a[j] >> bit) & 1) {
                    if (rangeEnd < j) {
                        rangeStart = j + 1;
                        rangeEnd = j;
                    } else {
                        rangeEnd = j;
                    }
                }
                if ((b[j] >> bit) & 1) {
                    if (rangeEnd < j) {
                        ops.push_back({rangeStart, rangeEnd, b[j] ^ a[j]});
                        rangeStart = j + 1;
                        rangeEnd = j;
                    } else {
                        rangeEnd = j;
                    }
                }
            }
            if (rangeEnd == n - 1) {
                ops.push_back({rangeStart, rangeEnd, 0});
            }
        }

        cout << ops.size() << endl;
        for (auto [l, r, x] : ops) {
            cout << l << " " << r + 1 << " " << x << endl;
        }
    }
    return 0;
}
