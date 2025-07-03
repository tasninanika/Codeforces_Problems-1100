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

        int c = 0;
        int mn = a[n - 1];

        for(int i = n - 2; i >= 0; i--){
            if(a[i] > mn){
                c++;
            }

            mn = min(mn, a[i]);
        }

        cout << c << endl;
    }

    return 0;
}

