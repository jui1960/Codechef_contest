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
        int x, y;
        cin >> x >> y;
        int ans = abs(x-y);
        int ans2 = ans / 2;
        cout << ans2 + x << " " << ans2 << '\n';
    }

    return 0;
}