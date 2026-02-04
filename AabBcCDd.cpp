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
        string a;
        cin >> a;

        vector<int> ans(26, 0);
        for (char b : a)
        {
            if (b >= 'a' && b <= 'z')
            {
                ans[b - 'a']++;
            }
            else
            {
                ans[b - 'A']++;
            }
        }
          sort(ans.rbegin(), ans.rend());
          int res = ans[0]+ans[1];
          cout<<res<<'\n';

    }

  
    return 0;
}