// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         string s;
//         cin >> n >> s;

//         int cnt = 0, cntt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '0' && s[i + 1] == '0')
//                 cnt++;
//             if (s[i] == '1' && s[i + 1] == '1')
//                 cntt++;
//         }

//         if (cntt >= cnt)
//             cout << 0 << '\n';

//         else
//             cout << ((cnt - cntt + 1) / 2) << '\n';
//     }

//     return 0;
// }



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

        int cnt = 0, cntt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
                cnt++;
            if (s[i] == '1' && s[i + 1] == '1')
                cntt++;
        }

        if (cntt >= cnt)
            cout << 0 << '\n';

        else
            cout << ((cnt - cntt + 1) / 2) << '\n';
    }

    return 0;
}
