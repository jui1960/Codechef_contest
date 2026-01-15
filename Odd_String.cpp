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
        string s;
        cin >> s;
        if (n == 1)
            cout << "YES\n";
        else
        {
            vector<int> freq(26, 0);
            for (char c : s)
            {
                freq[c - 'a']++;
            }
            bool mx = true;
            for (int i = 0; i < 26; i++)
            {
                if (freq[i] > 2)
                {
                    mx = false;
                    break;
                }
            }

            if (mx)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}