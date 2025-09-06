#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        priority_queue<ll> pq;
        ll total = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                if(!pq.empty()){

                }
            }
        }
    }


    return 0;
}
