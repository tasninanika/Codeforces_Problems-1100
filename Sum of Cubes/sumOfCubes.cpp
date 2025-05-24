#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x;
        cin >> x;

        bool f = 0;

        for (long long a = 1; a * a * a < x; a++) {
            long long a3 = a * a * a;

            for (long long b = 1; b * b * b <= x - a3; b++) {
                long long b3 = b * b * b;

                if (a3 + b3 == x) {
                    f = 1;
                    break;
                }
             }

            if (f){
                break;
            }
        }
         if (f){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }



    return 0;
}
