#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> v(n);
        long long sumSquares = 0;
        long long totalSum = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            sumSquares += v[i] * v[i];
            totalSum += v[i];
        }

        c -= sumSquares;
        c /= (4 * n);

        totalSum /= (2 * n);

        long long result = (long long) sqrt((long long)totalSum * totalSum + c) - totalSum;

        cout << result << endl;
    }

    return 0;
}
