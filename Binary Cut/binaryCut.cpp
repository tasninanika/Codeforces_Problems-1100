#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int r = 0, d = 0;

        for(int i = 1; i < s.size(); i++){
            if(s[i-1] == '0' && s[i] == '1'){
                r++;
            }
            if(s[i-1] == '1' && s[i] == '0'){
                d++;
            }
        }

        int result = r - (r > 0) + d + 1;

        cout << result << endl;
    }

    return 0;
}

