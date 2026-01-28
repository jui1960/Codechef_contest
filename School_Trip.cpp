#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,k;
        cin>>n>>x>>k;

        int ans = (x/k)*k;
        int dif = x- ans;
        int mul = ans+k;
        int result = dif;
        if(mul<=n){
            int res = mul - x;
            result = min(result,res);
        }
        cout<<result<<'\n';
    }
    

    

    return 0;
}

