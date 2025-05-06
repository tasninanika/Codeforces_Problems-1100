#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a;
        cin >> a;

        int r = 180 - a;

        if(r == 0){
            cout << "NO" << endl;
        }
        else if(360 % r == 0){
            int n = 360 / r;
            if(n >= 3){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }


    return 0;
}
