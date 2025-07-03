#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<long long> sum(n);
        sum[0] = a[0];

        for(int i = 1; i < n; i++){
            sum[i] = sum[i - 1];
        }

        while(q--){
            int x;
            cin >> x;
        }
    }

    return 0;
}
