#include<iostream>
using namespace std;

int main(){
    int n, m, t;
    cin >> n >> m;

    int a[100005], d[100005] = {0};

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> t;
        set<int> s;
        for(int j = t; j <= n; j++){
            s.insert(a[j]);
        }
        cout << s.size() << endl;
    }


    return 0;
}
