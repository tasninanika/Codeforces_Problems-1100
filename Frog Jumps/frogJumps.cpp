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

    }


    return 0;
}
