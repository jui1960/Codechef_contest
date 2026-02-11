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
        vector<long long> v(n), a(n);
        long long summision = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            summision += v[i];
        }
        long long ans = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            long long res = v[i] - a[i];
            if(res<ans){
                ans = res;
            }
        }
        cout<<summision-ans<<'\n';
    }

    return 0;
}