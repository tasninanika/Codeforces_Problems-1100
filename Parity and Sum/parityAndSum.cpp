#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solveOne(vector<ll> &even, vector<ll> &odd) {
    ll mx = odd.back();
    if (mx < even[0]) return even.size() + 1;

    ll ans = 0;
    for (ll x : even) {
        if (x > mx) return even.size() + 1;
        ans++;
        mx += x;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> odd, even;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x % 2) odd.push_back(x);
        else even.push_back(x);
    }

    if (odd.empty() || even.empty()) {
        cout << 0 << "\n";
        return;
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    cout << solveOne(even, odd) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
