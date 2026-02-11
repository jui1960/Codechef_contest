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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                cnt++;
            }
        }
        if (cnt % 2 == 0)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }

    return 0;
}