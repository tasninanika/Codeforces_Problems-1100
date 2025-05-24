#include<iostream>
using namespace std;

int main(){
    int t,n,a[101];
    cin >> t;

     while(t--){
        int even = 0, odd = 0, dif = 0, diff = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }

    return 0;
}
