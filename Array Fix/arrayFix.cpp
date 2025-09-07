#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool possible = true;
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] > a[i+1]) {
            if (a[i] >= 10) {
                int d1 = a[i] / 10;
                int d2 = a[i] % 10;
                if (d1 > d2 || d2 > a[i+1]) {
                    possible = false;
                    break;
                }
                a[i] = d1;
                a.insert(a.begin() + i + 1, d2);
            }
            else {
                possible = false;
                break;
            }
        }
    }

    if (possible) {
        for (int i = 0; i < a.size() - 1; ++i) {
            if (a[i] > a[i+1]) {
                possible = false;
                break;
            }
        }
    }

    if (possible) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
