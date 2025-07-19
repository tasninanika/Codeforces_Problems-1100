#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<string> words(n);
        map<string, int> mp;

        for(int i = 0; i < n; i++){
            cin >> words[i];
            mp[words[i] = 1;
        }

        for(int i = 0; i < n; i++){
            bool found = false;
            string word = words[i];

            for(int j = 1; j < (int)word.size(); j++){
                string left = word.substr(0, j);
                string right = word.substr(j);
            }
        }
    }

    return 0;
}
