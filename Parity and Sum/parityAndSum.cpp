#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> odd, even;
        for(auto x : a){
            if(x % 2)
                odd.push_back(x);
            else
                even.push_back(x);
        }

        if(odd.empty() || even.empty()){
            cout << 0 << endl;
            continue;
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        int ans = even.size();

        if(odd[0] < even.back())
            ans += odd.size();

        cout << ans << endl;
    }
    return 0;
}
