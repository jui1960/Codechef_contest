#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int total = accumulate(a.begin(), a.end(), 0);
        int win = 0;

        // সব possible [L, R] চেক
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += a[j];
                if (sum >= 0 && total - sum <= 0)
                    win++;
            }
        }

        cout << win << "\n";
    }
    return 0;
}
