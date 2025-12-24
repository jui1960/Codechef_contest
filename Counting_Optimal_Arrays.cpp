#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 99824435

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1)
        {
            cout << (b+ 1) % MOD<<'\n';
            continue;
        }
        if (b == 0)
        {
            cout << 1 << '\n';
            continue;
        }
        ll c = 0;
        while ((1LL << (c + 1)) <= b)
        {
            c++;
        }
        ll h_bit = (1LL << c);
        ll max_xor = (1 << (c + 1)) - 1;
        ll cnt = 0;
        cnt = (b - (1LL << c) + 1);
        ll anss = (cnt * 2) % MOD;
        cout << anss << '\n';
    }
    return 0;
}