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

        int mx = 0;
        int mx1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                mx1++;
                if (mx1 > mx)
                {
                    mx = mx1;
                }
            }
            else
            {
                mx1 = 0;
            }
        }

        cout << mx << '\n';
    }

    return 0;
}