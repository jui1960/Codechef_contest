#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, a, b;
    cin >> m >> a >> n >> b;
    int ans = (n * b) - (m * a);
    cout << ans << '\n';

    return 0;
}