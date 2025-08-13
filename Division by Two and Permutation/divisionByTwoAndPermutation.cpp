#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        priority_queue<int> pq;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            pq.push(x);
        }

        int ok = 1;
        for(int i = 0; i < n; i++){
            while(pq.top() > n - i){
                int x = pq.top();
                pq.pop();
                pq.push(x / 2);
            }
        }
    }

    return 0;
}
