#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        int odd = 0, even = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(a[i] % 2){
                odd++;
            }
            else{
                even++;
            }
        }
    }

    return 0;
}
