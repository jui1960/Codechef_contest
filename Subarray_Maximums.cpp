#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        // চেক করি কোনো "10" pattern আছে কিনা
        bool possible = true;
        for (int i = 0; i + 1 < N; i++) {
            if (S[i] == '1' && S[i + 1] == '0') {
                possible = false;
                break;
            }
        }

        if (!possible) {
            cout << -1 << "\n";
            continue;
        }

        // যদি possible হয় → permutation তৈরি
        vector<int> ans;
        int last = N;

        // ডান থেকে বামে scan করি
        for (int i = N - 1; i >= 0; i--) {
            if (S[i] == '1') {
                for (int j = i + 1; j <= last; j++)
                    ans.push_back(j);
                last = i;
            }
        }
        for (int j = 1; j <= last; j++)
            ans.push_back(j);

        reverse(ans.begin(), ans.end());

        // output
        for (int i = 0; i < N; i++) {
            cout << ans[i] << (i + 1 == N ? '\n' : ' ');
        }
    }

    return 0;
}
