#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, c;
        cin >> n >> c;

        vector<int> v(n);
        int sumSquares = 0;
        int totalSum = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            sumSquares += v[i];
            totalSum += v[i];
        }
    }

    return 0;
}
