#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int i = -1, j = n;
        int ans = 0;
        int cnt = 0;
        long long sa = 0, sb = 0;

        while(i < j)
        {
            if(sa == sb)
            {
                ans = cnt;
                sa = arr[++i];
                cnt = 1;
                sb = 0;
            }
            else if(sa < sb)
            {
                sa += arr[++i];
                cnt++;
            }
            else
            {
                sb += arr[--j];
                cnt++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

