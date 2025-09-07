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
    s1.push_back(neg.back());
    neg.pop_back();

    if(neg.size() % 2 == 1){
        s3.push_back(neg.back());
        neg.pop_back();
    }

    for(int i = 0; i < (int)neg.size(); i++){
        s2.push_back(neg[i]);
    }
    for(int i = 0; i < (int)pos.size(); i++){
        s2.push_back(pos[i]);
    }
    for(int i = 0; i < (int)zero.size(); i++){
        s3.push_back(zero[i]);
    }
    cout << s1.size();

    for(int i = 0; i < (int)s1.size(); i++){
        cout << " " << s1[i];
    }
    cout << endl;

    cout << s2.size();
    for(int i = 0; i < (int)s2.size(); i++){

    }

    return 0;
}
