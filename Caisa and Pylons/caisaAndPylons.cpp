#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int energy = 0, totalBuy = 0;
    int prev = 0, curr;

    for(int i = 0; i < n; i++){
        cin >> curr;

        energy += prev - curr;

        if(energy < 0){
            totalBuy += -energy;
            energy = 0;
        }

        prev = curr;
    }

    cout << totalBuy << endl;

    return 0;
}

