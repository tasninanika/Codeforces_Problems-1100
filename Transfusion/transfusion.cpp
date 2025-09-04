#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<long long> a(n);
    long long total_sum = 0;
    long long odd_sum = 0;
    long long even_sum = 0;
    int odd_count = 0;
    int even_count = 0;

    for(int i = 0; i < n; ++i){
        cin >> a[i];

        total_sum += a[i];
        if((i + 1) % 2 != 0){
            odd_sum += a[i];
            odd_count++;
        }
        else{
            even_sum += a[i];
            even_count++;
        }
    }

    if(total_sum % n != 0){
        cout << "NO" << endl;
        return;
    }

    long long avg = total_sum / n;

    if(odd_sum % odd_count == 0 && even_sum % even_count == 0){
        if((odd_sum / odd_count) == avg && (even_sum / even_count) == avg){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
