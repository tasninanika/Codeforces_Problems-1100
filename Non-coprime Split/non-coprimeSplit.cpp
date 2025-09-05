#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long l, r;
        cin >> l >> r;

        if(r < 4){
            cout << -1 << endl;
            continue;
        }

        long long target_sum;
        if(r % 2 == 0){
            target_sum = r;
        }
        else{
            target_sum = r - 1;
        }

        if(target_sum >= l){
            cout << target_sum / 2 << " " << target_sum / 2 << endl;
        }
        else{
            bool found = false;

            for{long long p = 2; p * p <= l; ++p){
                if(l % p == 0){
                    cout << p << " " << l - p << endl;
                    found = true;
                    break;
                }
            }
            if(!found){
                cout << -1 << endl;
            }
        }
    }
    return 0;
}

