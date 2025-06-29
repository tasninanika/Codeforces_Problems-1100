#include<iostream>
using namespace std;

long long calculate(long long a, long long b, long long x, long long y, long long n) {
    long long reduceA = a - x;

    if(n < reduceA){
        a = a - n;
        n = 0;
    }
    else{
        a = x;
        n = n - reduceA;
    }

    long long reduceB = b - y;
    if(n < reduceB){
        b = b - n;
        n = 0;
    }
    else{
        b = y;
        n = n - reduceB;
    }

    return a * b;
}

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        long long a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        long long res1 = calculate(a, b, x, y, n);
        long long res2 = calculate(b, a, y, x, n);

        if(res1 < res2){
            cout << res1 << endl;
        }
        else{
            cout << res2 << endl;
        }
    }

    return 0;
}

