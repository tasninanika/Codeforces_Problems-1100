#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> diffs;
        ll sum = 0;

        for (ll i = 0; i < n; i++) {
            ll leftVal  = i;
            ll rightVal = n - i - 1;
            ll cur = (s[i] == 'L' ? leftVal : rightVal);
            ll best = max(leftVal, rightVal);
            sum += cur;
            diffs.push_back(best - cur);
        }

        sort(diffs.rbegin(), diffs.rend());

        for (ll i = 0; i < n; i++) {
            sum += diffs[i];
            cout << sum << " ";
        }
        cout << "\n";
    }
    return 0;
}

