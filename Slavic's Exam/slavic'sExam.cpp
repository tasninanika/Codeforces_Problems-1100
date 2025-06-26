#include<iostream>
using namespace std;

int main(){
    long long T;
    cin >> T;

    while(t--){
        string s, t;
        cin >> s >> t;

        int j = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] = t[j]){
                j++;
            }
            else if(s[i] == '?'){
                s[i] = t[j];
            }
        }
    }

    return 0;
}
