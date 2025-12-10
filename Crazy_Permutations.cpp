// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;

//         vector<int> A(N+1), B(N+1), pos(N+1);

//         for (int i = 1; i <= N; i++) {
//             cin >> A[i];
//             pos[A[i]] = i;   // store position of each value in A
//         }
//         for (int i = 1; i <= N; i++) {
//             cin >> B[i];
//         }

//         bool ok = true;

//         for (int i = 1; i < N; i++) {
//             int x = B[i];
//             int y = B[i+1];
//             if (pos[x] > pos[y]) {
//                 ok = false;
//                 break;
//             }
//         }

//         cout << (ok ? "YES\n" : "NO\n");
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1), p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            // p[a[i]] = i;
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            p[b[i]]=i;
        }

        bool ok = true;

        for (int i = 1; i < n; i++)
        {
            int x = a[i];
            int y = a[i + 1];

            if (p[x] > p[y])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }

        // cout<<(ok? "YES\n" : "NO\n");
    }

    return 0;
}
