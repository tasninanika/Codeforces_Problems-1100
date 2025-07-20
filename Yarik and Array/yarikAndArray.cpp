#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int prev = 0, cs = 0, mxs = -1007;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            if((prev + x) % 2 == 0 || cs < 0){
                cs = 0;
            }
            cs += x;
            mxs = max(mxs, cs);
            prev = x % 2;
        }

        cout << mxs << endl;
    }

    return 0;
}

