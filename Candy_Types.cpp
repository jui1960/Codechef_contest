#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int freq[101] = {0};
        for (int i = 0; i < n; i++)
        {
            int clr;cin>>clr;
            freq[clr]++;
        }
        int mx = 0;
        int color = 0;

        for (int i = 0; i < n; i++)
        {
            if(freq[i]>mx){
                mx = freq[i];
                color = i;
            }
        }

        cout<<color<<'\n';
        
        
    }
    
    

    return 0;
}