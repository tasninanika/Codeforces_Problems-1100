#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long max_allowed = 1e10;
        bool ok = true;

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] <= max_allowed) {
                max_allowed = a[i];
            } else {
                string s = to_string(a[i]);
                for (char c : s) {
                    int digit = c - '0';
                    if (digit > max_allowed) {
                        ok = false;
                        break;
                    }
                    max_allowed = min<long long>(max_allowed, digit);
                }
                if (!ok) break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
