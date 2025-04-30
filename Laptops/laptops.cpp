#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int price[n], quality[n];
    for(int i = 0; i < n; i++){
        cin >> price[i] >> quality[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(price[i] > price[j]){
                swap(price[i], price[j]);
            }
        }
    }

    return 0;
}
