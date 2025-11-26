

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
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<char> f;
        f.reserve(n);
        for (char c : s)
        {
            if (c != 'I')
                f.push_back(c);
        }

        long long m = f.size();

        if (m == 0)
        {
            cout << (n * k - 1) << '\n';
            continue;
        }

        long long dinternal = 0;
        for (int i = 0; i + 1 < m; i++)
        {
            if (f[i] != f[i + 1])
                dinternal++;
        }

        long long crs = (f.back() != f.front()) ? 1 : 0;

        long long tr = k * dinternal + (k - 1) * crs;

        long long total = n * k;
        long long ans = total - 1 - tr;

        cout << ans << '\n';
    }

    return 0;
}
