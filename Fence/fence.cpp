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

    int min_sum = current_sum;
    int min_index = 0;

     for (int i = 1; i <= n - k; i++) {
        current_sum = current_sum - h[i - 1] + h[i + k - 1];

    return 0;
}
