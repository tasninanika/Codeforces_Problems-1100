#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a + n, greater<int>());

        vector<long long> sum(n);
        sum[0] = a[0];

        for(int i = 1; i < n; i++){
            sum[i] = sum[i - 1];
        }

        while(q--){
            int x;
            cin >> x;

            int y = lower_bound(sum.begin(), sum.end(), x) - sum.begin();

            if(y == n){
                cout << -1 << endl;
            }
            else{
                cout << (y + 1) << endl;
            }
        }
    }

    return 0;
}
