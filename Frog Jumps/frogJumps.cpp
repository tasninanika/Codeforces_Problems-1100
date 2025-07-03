#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        int last = -1;
        int max_gap = 0;

        for(int i = 0; i < str.length(); i++){
            if(str[i] == 'R'){
                max_gap = max(max_gap, i - last);
                last = i;
            }
        }

        max_gap = max(max_gap, (int)str.length() - last);

        cout << max_gap << endl;
    }

    return 0;
}
