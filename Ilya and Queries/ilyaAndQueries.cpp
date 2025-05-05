#include<iostream>
using namespace std;

int main(){
    int m, l, r, c = 0;

    int dp[100005];
    string s;
    cin>>s>>m;

    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])
            c++;
        dp[i] = c;
    }

    while(m--){
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << endl;
    }




    return 0;
}
