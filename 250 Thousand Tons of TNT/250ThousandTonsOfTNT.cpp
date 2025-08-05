#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> divisors;
        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) {
                    divisors.push_back(n / i);
                }
            }
        }

        sort(divisors.begin(), divisors.end());

        long long maxDifference = 0;

        for (int size : divisors) {
            long long maxSum = LLONG_MIN;
            long long minSum = LLONG_MAX;
            long long currentSum = 0;
            int count = 0;

            for (int i = 0; i < n; ++i) {
                currentSum += a[i];
                count++;

                if (count == size) {
                    maxSum = max(maxSum, currentSum);
                    minSum = min(minSum, currentSum);
                    currentSum = 0;
                    count = 0;
                }
            }

            maxDifference = max(maxDifference, maxSum - minSum);
        }

        cout << maxDifference << endl;
    }

    return 0;
}

