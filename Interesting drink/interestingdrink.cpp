#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    sort(x, x+n);

    int q;
    cin >> q;

    while(q--){
        int m;
        cin >> m;

        int shops = upper_bound(x, x + n, m) - x;
    }

    return 0;
}
