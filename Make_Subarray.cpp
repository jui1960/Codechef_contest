#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int first = -1;
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (first == -1)
                    first = i;
                last = i;
            }
        }
        int count = 0;
        if (first != -1)
        {
            for (int i = first; i <= last; i++)
            {
                if (s[i] == '0')
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}