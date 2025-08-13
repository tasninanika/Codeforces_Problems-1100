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
            if(pq.top() != n - i){
                ok = 0;
                break;
            }
            pq.pop();
        }
        if(ok == 1){
            cout << "YES" << endl;
        }
        else{

        }
    }

    return 0;
}
