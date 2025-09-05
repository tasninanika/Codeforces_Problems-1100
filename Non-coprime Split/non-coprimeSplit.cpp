#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long l, r;
        cin >> l >> r;

        if (r < 4) {
            cout << -1 << "\n";
        }
        else if (l == r) {
            long div = -1;
            for (long p = 2; p * p <= r; p++) {
                if (r % p == 0) {
                    div = p;
                    break;
                }
            }
            if (div != -1) cout << div << " " << r - div << "\n";
            else cout << -1 << "\n";
        }
        else {
            cout << 2 << " " << (r % 2 == 0 ? r - 2 : r - 3) << "\n";
        }
    }
    return 0;
}
