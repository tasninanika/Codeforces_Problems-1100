#include<iostream>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; ++i){
        ll a,b,c;
        cin >> a >> b >> c;

        int x = (a + b + c) / 9;

        if(x<=min(a,min(b,c)) && (a+b+c)%9==0){
            cout <<"YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
