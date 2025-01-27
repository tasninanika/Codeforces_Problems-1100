#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int arr[n], sum = 0, car;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    if(sum % 4 == 0){
        car = sum / 4;
        cout << car << endl;
    }
    else{
        car = (sum / 4) + 1;
        cout << car << endl;
    }

    return 0;
}
