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
        string s;
        cin >> n >> s;
        bool zerro = false;
        int cnt = 0;
        for (auto c : s)
        {
            if (c == '0')
            {
                zerro = true;
            }
            else if (c == '1' && zerro)
            {

                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
