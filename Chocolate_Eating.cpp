#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int ans;
        if(a==b){
            ans = 2*a-1;
        }

        else{
            ans = 2*min(a,b) + abs(a-b);
        }
        cout<<ans<<'\n';
    }
    return 0;
}