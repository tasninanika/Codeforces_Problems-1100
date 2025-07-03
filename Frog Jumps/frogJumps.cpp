#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        ll c = 0, pos = -1;
        for(ll i = s.size() - 1; i >= 0; i--){
            c++;

            if(s[i] == 'R'){
                pos = i;
                break;
            }
        }

        ll ans = c;
        c = 0;
        for(ll i = 0; i <= pos; i++){
            if(s[i] == 'R'){
                c++;
                ans = max(ans, c);
                c = 0;
            }
            else{
                c++;
            }
        }

    }


    return 0;
}
