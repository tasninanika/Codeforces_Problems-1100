#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x, y, k;
        cin >> x >> y >> k;

        long long a = x / k;
        long long b = y / k;

        if(x % k > 0){
            a++;
        }
        if(y % k > 0){
            b++;
        }

        if(b > a){
            cout << 2 * b << endl;
        }
        else if(a > b){
            cout << 2 * b + (2 * (a - b) - 1) << endl;
        }
        else{
            cout << 2 * a << endl;
        }
    }

    return 0;
}
