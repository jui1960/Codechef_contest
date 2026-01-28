#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        long long x,y,z;
        cin>>x>>y>>z;

        long long pair = min(x,z);
        long long pair1 = y/2;

        cout<<pair+pair1<<'\n';
    }
    

    

    return 0;
}