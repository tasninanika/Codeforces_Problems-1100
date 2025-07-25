#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, x;
        cin >> n >> x;

        vector<long long> w(n);

        for(int i = 0; i < n; i++){
            cin >> w[i];
        }

        long long low = 1;
        long long high = 2e9;
        long long result = -1;

        while(low <= high){
            long long mid = low + (high - low) / 2;

            long long total = 0;

            for(int i = 0; i < n; i++){
                if(w[i] < mid){
                    total += mid - w[i];
                }
                if(total > x){
                    break;
                }
            }

            if(total <= x){
                result = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}
