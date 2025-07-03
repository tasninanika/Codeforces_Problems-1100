#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[5001];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int found = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 2; j < n; j++){
                if(a[i] == a[j]){
                    found = 1;
                    break;
                }
            }
            if(found == 1){
                break;
            }
        }

        if(found == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

