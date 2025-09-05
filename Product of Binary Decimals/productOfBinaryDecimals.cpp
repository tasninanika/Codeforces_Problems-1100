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
        long long x1 = x0 + 1;
        if(x0 <= MAXN){
            q.push((int)x0);
        }
        if(x1 <= MAXN){
          q.push((int)x1);
        }
    }

    vector<int> mult;
    for(int v : binDec){
        if(v != 1){
            mult.push_back(v);
        }
    }

    vector<char> reachable(MAXN + 1, 0);
    reachable[1] = 1;
    queue<int> bfs;
    bfs.push(1);

    while(!bfs.empty()){
        int cur = bfs.front();
        bfs.pop();
        for(int m : mult){
            long long prod = 1LL * cur * m;
            if(prod > MAXN){
                continue;
            }
        }
    }

    return 0;
}
