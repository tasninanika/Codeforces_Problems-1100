#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    pair<int, int> laptops[n];

    for(int i = 0; i < n; i++) {
        cin >> laptops[i].first >> laptops[i].second;
    }

    sort(laptops, laptops + n);

    for(int i = 1; i < n; i++) {
        if(laptops[i].second < laptops[i - 1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;
    return 0;
}
