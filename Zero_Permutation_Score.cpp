#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;

        if(n<=2){
            cout<<0<<'\n';
        }
        else{
            long long anss = ((n-2)*(n-2))/4;
            cout<<anss<<'\n';
        }
    }
    
    
    return 0;
}
