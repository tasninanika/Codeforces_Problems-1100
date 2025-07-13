#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int maxSum = -1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(__gcd(a[i], a[j]) == 1){
                    int indexSum = (i + 1) + (j + 1);
                }
            }
        }
    }

    return 0;
}
