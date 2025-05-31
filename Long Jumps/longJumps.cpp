#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n), dp(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = n - 1; i >= 0; i--){
            long long jump = i + a[i];
            if(jump < n){
                dp[i] = a[i] + dp[jump];
            }
            else{
                dp[i] = a[i];
            }
        }

        long long maxScore = *max_element(dp.begin(), dp.end());
    }


    return 0;
}
