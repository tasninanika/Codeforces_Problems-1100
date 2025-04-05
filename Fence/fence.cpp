#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

     int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += h[i];
    }

    return 0;
}
