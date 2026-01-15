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

        int n, a, b;
        cin >> n >> a >> b;
        int cnt = 0;
        int flg = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (x < a)
            {
                if (flg == 0)
                {
                    cnt++;
                    flg = 1;
                }
            }
            else if (x > b)
            {
                flg = 0;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}