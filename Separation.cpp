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
        int n, x;
        cin >> n >> x;
        vector<long long int> v(n);
        long long int le = 0, eq = 0, gra = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > x)
            {
                gra++;
            }
            else if (v[i] < x)
            {
                le++;
            }
            else
            {
                eq++;
            }
        }

        if (eq > 0 || le == 0 || gra == 0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No" << '\n';
        }
    }

    return 0;
}
