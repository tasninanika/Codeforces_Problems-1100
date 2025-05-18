#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;


    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int max_freq = 0;
        for (auto [num, count] : freq) {
            if (count > max_freq)
                max_freq = count;
        }

        int unique = freq.size();

        if (unique == max_freq)
