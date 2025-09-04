#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }

        int idx = -1;
        for(int i = 0; i < n; ++i){
            if(a[i] > 1){
                idx = i; break;
            }
        }

        if (idx == -1) {
            if (n % 2 == 1) cout << "First\n";
            else cout << "Second\n";
        }
        else {
            if ((idx + 1) % 2 == 1) cout << "First\n";
            else cout << "Second\n";
        }
    }
    return 0;
}

