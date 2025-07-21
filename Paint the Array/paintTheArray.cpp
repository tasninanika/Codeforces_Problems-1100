#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long ans = 0;

        {
            bool ok = true;
            int prevColor = (a[0] % a[0] == 0);
            for (int i = 1; i < n; i++) {
                int cur = (a[i] % a[0] == 0);
                if (cur == prevColor) { ok = false; break; }
                prevColor = cur;
            }
            if (ok) ans = a[0];
        }

        if (ans == 0) {
            bool ok = true;
            int prevColor = (a[0] % a[1] == 0);
            for (int i = 1; i < n; i++) {
                int cur = (a[i] % a[1] == 0);
                if (cur == prevColor) { ok = false; break; }
                prevColor = cur;
            }
            if (ok) ans = a[1];
        }

        cout << ans << endl;
    }

    return 0;
}

