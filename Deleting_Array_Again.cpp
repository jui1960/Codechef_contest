#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
        vector<ll> v(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        vector<ll> preee(n + 1);
        
        preee[0] = c[0];
        for (int i = 1; i < n; i++)
        {
            preee[i] = min(preee[i - 1], c[i]);
        }
        ll anss = 0;
        for (int i = 0; i < n; i++)
        {
            anss += v[i] * preee[i];
        }
        cout << anss << '\n';
    }
    return 0;
}
