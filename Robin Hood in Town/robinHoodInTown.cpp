#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        if(n == 1 || n == 2){
            cout << -1 << endl;
            continue;
        }

        sort(a.begin(), a.end());

        int needUnhappy = n / 2 + 1;
        long long ans = -1;

        for(int i = 0; i < needUnhappy; i++){
            long long need = 2LL * n * a[i] - sum + 1;
            ans = max(ans, need);
        }

        if(ans < 0){
            ans = 0;
        }

        cout << ans << endl;
    }


    return 0;
}
