#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> prefix(n, 0);
        set<char> distinct_chars;
        for(int i = 0; i < n; i++){
            distinct_chars.insert(s[i]);
            prefix[i] = distinct_chars.size();
        }

        vector<int> suffix(n, 0);
        distinct_chars.clear();

        for(int i = n - 1; i >= 0; i--){
            distinct_chars.insert(s[i]);
            suffix[i] = distinct_chars.size();
        }

        int max_sum = 0;
        for(int i = 0; i < n - 1; i++){
            max_sum = max(max_sum, prefix[i] + suffix[i + 1]);
        }
        cout << max_sum << endl;
    }

    return 0;
}
