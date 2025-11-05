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
        cin>>n;
        string s;
        cin >> s;
        
        int zero = count(s.begin(), s.end(), '0');
        int one = count(s.begin(), s.end(), '1');

        if (zero == s.size())
            cout << s.size() << '\n';

        else if (one == s.size())
            cout << 0 << '\n';

        else
        {
            if (s[0] == '1')
            {
                cout << 0 << '\n';
            }
            else
            {
                int r = s.find('1');
                cout << r << '\n';
            }
        }
    }
    return 0;
}
