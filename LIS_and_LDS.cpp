// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while(T--) {
//         int N;
//         cin >> N;
//         vector<long long> F(N);
//         long long sum = 0, mx = 0;

//         for(int i = 0; i < N; i++) {
//             cin >> F[i];
//             sum += F[i];
//             mx = max(mx, F[i]);
//         }

//         long long ans = min(mx, (sum + 1) / 2);
//         cout << ans << "\n";
//     }

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
        vector<long long> f(n);
        long long summ = 0, mx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
            summ += f[i];
            mx = max(mx, f[i]);
        }
        long long other = summ-mx;
        long long ans = min(mx,other+1);
        cout << ans << '\n';
    }

    return 0;
}