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
        int c = 0;
        long long sa = 0, sb = 0;

        while(i < j)
        {
            if(sa == sb)
            {
                ans += c;
                sa = arr[i+1];
                c = 1;
                i++;
                sb = 0;
            }
            else if(sa < sb)
            {
                sa += arr[i+1];
                i++;
                c++;
            }
            else
            {
                sb += arr[j-1];
                j--;
                c++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

