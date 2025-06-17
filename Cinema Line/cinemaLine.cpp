#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n;

    int a = 0, b = 0;
    string ans = "YES";

    for(int i = 0; i < n; i++){
        cin >> t;
        if(t == 25){
            a += 1;
        }
        else if(t == 50){
            b += 1;
            a -= 1;
            if(a < 0){
                ans = "NO";
                break;
            }
        }
        else{
            if(a >= 1 && b >= 1){
                a -= 1;
                b -= 1;
            }
            else if(a >= 3){

            }
        }
    }


    return 0;
}
