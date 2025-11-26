#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        long long int l = max(x - y, x - z);
        long long int r = min(x + y, x + z);

        if (l > r)
        {
            cout << 0 << '\n';
            continue;
        }
        long long int cntt = r - l + 1;
        if (l <= x && x <= r)
        {
            cntt--;
        }
        if (cntt < 0)
        {
            cout << 0 << '\n';
        }
        cout << cntt << '\n';
    }
    return 0;
}
