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
        int w, p, k;
        cin >> w >> p >> k;
        if (w > k)
        {
            cout << k * 2 << '\n';
        }
        else
        {
            int wood = k - w;
            int r = w * 2 + 1 * wood;
            cout << r << '\n';
        }
    }

    return 0;
}
