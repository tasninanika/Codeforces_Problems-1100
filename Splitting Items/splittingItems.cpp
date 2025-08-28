#include<iostream>
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
    }

    return 0;
}
