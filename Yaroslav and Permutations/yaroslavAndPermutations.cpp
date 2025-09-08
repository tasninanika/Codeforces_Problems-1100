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

        long long max_allowed = 1e10;
        bool ok = true;

        for(int i = n - 1; i >= 0; i--){
            if(a[i] <= max_allowed){
                max_allowed = a[i];
            }
            else{
                int x = a[i];
                vector<int> digits;

                while(x > 0){
                    digits.push_back(x % 10);
                    x /= 10;
                }
            }
        }
    }


    return 0;
}
