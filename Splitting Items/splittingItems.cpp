#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());

        long long ans = 0;
        for(int i = 0; i < n; i++){
            if (i % 2 == 0) {
                ans += a[i];
            }
            else{
                long long increase_by = min(k, a[i - 1] - a[i]);
                a[i] += increase_by;
                k -= increase_by;
                ans -= a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
