#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int even_count = 0;
        int odd_count = 0;

        for(int i = 0; i < n; ++i){
            int a;
            cin >> a;

            if(a % 2 == 0){
                even_count++;
            }
            else{
                odd_count++;
            }
        }

        if(even_count == 0 || odd_count == 0){
            cout << 0 << endl;
        }
        else{
            cout << even_count << endl;
        }
    }

    return 0;
}
