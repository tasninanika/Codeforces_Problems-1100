#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i;
    vector<long long>v;

    for(i=1;i<10002;i++){
        v.push_back(i*i*i);
    }

    int t;
    cin>>t;

    while(t--)
    {
        bool f = 0;
        long long x;
        cin >> x;

        for(i = 1; i * i * i < x; i++){
            long long ans = x - (i * i * i);
            if(binary_search(v.begin(),v.end(),ans)){
                f = 1;
                break;
            }
        }

        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
