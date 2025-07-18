#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<long long> costs;
        for(int i = 0; i < n; i++){
            costs.push_back(a[i] + (i + 1));
        }
        sort(costs.begin(), costs.end());

        int c = 0;
        for(int i = 0; i < n; i++){
            if(x >= costs[i]){
                x -= costs[i];
                c++;
            }
            else{
                break;
            }
        }
        cout << c << endl;
    }
    return 0;
}
