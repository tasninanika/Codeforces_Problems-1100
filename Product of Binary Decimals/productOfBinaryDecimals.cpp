#include<bits/stdc++.h>
using namespace std;

int main(){
    const int MAXN = 100000;

    vector<int> binDec;
    queue<int> q;
    q.push(1);

    while(!q.empty()){
        int x = q.front(); q.pop();
        if(x > MAXN){
            continue;
        }
        binDec.push_back(x);
        long long x0 = 1LL * x * 10;
    }

    return 0;
}
