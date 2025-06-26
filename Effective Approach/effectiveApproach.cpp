#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<int, int> position;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        position[num] = i;
    }

    int q;
    cin >> q;

    long long first = 0;
    long long second = 0;

    for(int i = 0; i < q; i++){
        int query;
        cin >> query;

        int index = position[query];

        first += index + 1;
        second += n - index;
    }

    cout << first << " " << second << endl;

    return 0;
}

