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
        int ans = 0;
        int mn = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            ans = v[i] + v[i + 1];
            mn = min(ans, mn);
        }
        cout << mn << '\n';
    }

    return 0;
}