#include<iostream>
using namespace std;

int main(){
    inr t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        long long res = 0, c = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            res += abs(arr[i]);
            if(arr[i] < 0){
                c++;
            }
        }

        for(int i = 0; i < n; i++){
            if(arr[i] < 0){
                arr[i] = abs(arr[i]);
            }
        }
        if(!(c % 2)){
            cout << res << endl;
        }
    }


    return 0;
}
