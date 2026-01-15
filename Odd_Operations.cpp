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
        string s;
        cin >> s;

        int last = s[s.length() - 1] - '0';
        if (last % 2 != 0)
        {
            cout << 0 << '\n';
            continue;
        }

        bool odd = false;
        bool can = false;
        for (int i = 0; i < s.length(); i++)
        {
            int cur = s[i] - '0';
            if (cur % 2 != 0)
            {
                odd = true;
            }
            if (cur > last)
                can = true;
        }
        if (odd)
            cout << 1 << '\n';
        else if (s.length() == 1)
            cout << -1 << '\n';
        else if (can)
            cout << 2 << '\n';
        else
            cout << 3 << '\n';
    }

    return 0;
}