#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> pos(51, 1e9);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pos[x] = min(pos[x], i + 1);
    }

    while(q--) {
        int query;
        cin >> query;
        int temp = pos[query];
        cout << temp << " ";
        pos[query] = 1;

        for (int j = 1; j <= 50; j++) {
            if (j != query && pos[j] < temp) {
                pos[j]++;
            }
        }
    }
    cout << endl;

    return 0;
}

