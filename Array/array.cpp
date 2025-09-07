#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vector<int> neg, pos, zero;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            neg.push_back(a[i]);
        }
        else if(a[i] > 0){
            pos.push_back(a[i]);
        }
        else{
            zero.push_back(a[i]);
        }
    }

    vector<int> s1, s2, s3;

    return 0;
}
