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

        sort(a.begin(), a.end());

        int needUnhappy = n / 2 + 1;
        long long ans = -1;

        for(int i = 0; i < needUnhappy; i++){
            long long need = 2LL * n * a[i] - sum + 1;
            ans = max(ans, need);
        }
    }


    return 0;
}
