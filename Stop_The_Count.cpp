#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n;
     string s;
     cin>>n>>s;
     int chef0 =0,chef1 =0,cnt =0;
     for(int i =0;i<n;i++){
        if(s[i]=='1')chef0++;
        else chef1++;
        if(chef0>chef1)cnt++;
     }
     cout<<cnt<<'\n';
    }
    return 0;
}