#include <bits/stdc++.h>
using namespace std;

int min_ops(vector<int> a)
{
    int n = a.size();
    int ops = 0, ops20 = 0;


    vector<int> g = a;
    for (int i = 1; i < n; i++)
    {
        if (g[i] == g[i - 1])
        {
            ops++;
            g[i]++;
        }
    }

    
    g = a;
    for (int i = 1; i < n; i++)
    {
        if (g[i] == g[i - 1])
        {
            ops20++;
            g[i - 1]++;
        }
    }

    return min(ops, ops20);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        cout << min_ops(v) << '\n';
    }
}