#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        long long n, x;
        cin >> n >> x;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long c = 0;
        long long have = 0;

        for (int i = n - 1; i >= 0; i--) {
            long long t = v[i];

            if(t >= x){
                c++;
                have += (t - x);
            }
            else if(t + have >= x){
                c++;
                have -= (x - t);
            }
        }

        cout << c << endl;
    }

    return 0;
}

