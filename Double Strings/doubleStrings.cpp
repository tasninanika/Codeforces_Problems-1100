#include<bits/stdc++.h>
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
            mp[words[i]] = 1;
        }

        for(int i = 0; i < n; i++){
            bool found = false;
            string word = words[i];

            for(int j = 1; j < (int)word.size(); j++){
                string left = word.substr(0, j);
                string right = word.substr(j);

                if(mp[left] && mp[right]){
                    found = true;
                    cout << 1;
                    break;
                }
            }
            if(!found){
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}
