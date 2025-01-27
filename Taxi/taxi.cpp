#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int arr[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return 0;
}
