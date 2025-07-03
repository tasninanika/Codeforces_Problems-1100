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
    }

    return 0;
}
