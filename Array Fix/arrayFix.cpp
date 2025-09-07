#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int max1 = 1e10;

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] <= max1) {
            max1 = min(max1, a[i]);
        }
        else {
            vector<int> digits;
            int x = a[i];

            while (x > 0) {
                digits.push_back(x % 10);
                x /= 10;
            }
            for (int j = digits.size() - 1; j >= 0; j--) {
                if (digits[j] > max1) {
                    cout << "NO" << endl;
                    return;
                }
                max1 = digits[j];
            }
        }
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
