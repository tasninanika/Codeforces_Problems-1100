#include<iostream>
using namespace std;

int main(){
    long long t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;

        if(k * k > n){
            cout << "NO" << endl;
        }
        else if((n % 2 == 1 && k % 2 == 1) || (n % 2 == 0 && k % 2 == 0)){
            cout << "YES" << endl;
        }
        else{

        }

    }

    return 0;
}
