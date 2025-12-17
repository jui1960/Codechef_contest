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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }
        int ans = 0;
        if (sum < 0)
        {
            ans = (-sum + n - 1) / n;
        }
        cout << ans << '\n';
    }

    return 0;
}