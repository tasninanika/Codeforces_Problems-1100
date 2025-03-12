#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    int q;
    cin >> q;

    int m[q];
    for(int i = 0; i < q; i++){
        cin >> m[i];
    }

    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            if(m[i] >= x[i]){
                c++;
            }
        }
    }

    return 0;
}
