#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x > n)
        {
            cout << 0 << '\n';
            continue;
        }
        else
        {
            int cnt = 0, sum = 0;

            for (int i = x; i <= n; i++)
            {
                cnt++;
                sum += i;
            }
            cnt*=x;
            int ans = sum-cnt;
            cout<<ans<<'\n';

            cout << cnt << " " << sum << '\n';
        }
    }

    return 0;
}