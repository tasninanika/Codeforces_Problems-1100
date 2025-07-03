#include<iostream>
using namespace std;

int main(){
    int k;
    cin >> k;

    int c = 0;

    for(int i = 19; ; i++){
        int sum = 0, temp = i;

        while(temp > 0){
            sum += temp % 10;
            temp /= 10;
        }

        if(sum == 10){
            c++;

            if(c == k){
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}

