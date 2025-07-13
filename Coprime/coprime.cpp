#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        unordered_map<int, int> idx;

        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            idx[x] = i;
        }

        int ans = -1;

        for(auto it1 : idx){
            for(auto it2 : idx){
                if(__gcd(it1.first, it2.first) == 1){
                    ans = max(ans, it1.second + it2.second);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
