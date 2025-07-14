#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int a[n+1];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll maximum = 0;
        sort(a, a+n);

        ll sum = 0;
        ll b[n];
        for(int i = 0; i < n; i++){
            sum += a[i];
            b[i+1] = b[i] + a[i];
        }

        for(int i = 0; i <= k; i++){
            maximum = max(maximum, b[n-i] - b[2 * (k - i]);
        }

        cout << maximum << endl;
    }

    return 0;
}
