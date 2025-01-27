#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int arr[n], c1 = 0, c2 = 0, c3 = 0, c4 = 0, min_car = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];

        if(arr[i] == 1){
            c1++;
        }
        else if(arr[i] == 2){
            c2++;
        }
        else if(arr[i] == 3){
            c3++;
        }
        else if(arr[i] == 4){
            c4++;
        }
    }
    min_car = c4;
    if(1 != 0 && c3 != 0){
        c3 = c3 - 1;
        c1 = c1 - 1;
        min_car = min_car + 1;
    }
    if(c1 == 0 && c3 != 0){
        min_car = min_car + c3;
        c3 = 0;
    }
    min_car = min_car + (c2 / 2);
    if(c2 % 2 != 0){
        if(c1 <= 2){
            min_car = min_car + 1;
            c2 = 0;
            c1 = 0;
        }
        else{
            c1 = c1 - 2;
            min_car = min_car + 1;
            c2 = 0;

        }
    }
    if(c1 != 0){
        min_car = min_car + (c1 / 4);
        if(c1 % 4 != 0){
            min_car = min_car + 1;
        }
    }
    cout << min_car;



    return 0;
}
