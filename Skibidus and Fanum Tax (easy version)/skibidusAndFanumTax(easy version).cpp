#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll x;
        cin >> x;

        ll prev = -1e18;
        bool ok = true;

        for(int i=0; i<n; i++){
            ll v1 = a[i], v2 = x - a[i];
            ll pick = 1e18;

            if(v1 >= prev){
                pick = min(pick, v1);
            }
            if(v2 >= prev){
                pick = min(pick, v2);
            }
            if(pick == (ll)1e18{

            }
        }
    }

    return 0;
}
