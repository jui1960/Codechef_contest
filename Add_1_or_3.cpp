#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long n, m;
        cin >> n >> m;
        if (n <= m && m <= 3*n && (3*n - m) % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
