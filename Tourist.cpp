#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, a, b;
        cin >> n >> a >> b;
        int minn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int xi, yi;
            cin >> xi >> yi;
            int result = abs(a - xi) + abs(b - yi);
            minn = min(minn, result);
        }

        cout << minn << endl;
    }
    return 0;
}