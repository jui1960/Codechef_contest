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
        long long bd = -1, tt = 1;
        int idxx = 1;
        for (int i = 1; i <= n; i++)
        {
            int d, x;
            cin >> d >> x;

            if (bd == -1 || d * tt > bd * x)
            {
                bd = d;
                tt = x;
                idxx = i;
            }
        }
        cout << idxx << '\n';
    }

    return 0;
}
