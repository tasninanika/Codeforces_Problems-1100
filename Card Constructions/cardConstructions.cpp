#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long c = 0;

        while(n > 2){
            long long t = 5;
            long long now = 2;

            while(n >= t + now){
                now = t + now;
                t += 3;
            }

            n -= now;
            c++;
        }

        if(n >= 2){
            c++;
        }

        cout << c << endl;
    }

    return 0;
}

