#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    map<int,int> freq;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
    }

    int max_freq = 0;
    for(auto x : freq){
        max_freq = max(max_freq, x.second);
    }

    if(max_freq <= (n + 1) / 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
