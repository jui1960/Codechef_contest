#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<ll> sn;
        int op = 0;
        for (int i = 0; i < n; i++)
        {
            if (sn.count(v[i]))
            {
                op++;
                sn.clear();
            }
            sn.insert(v[i]);
        }

        cout << op << '\n';
    }

    return 0;
}
