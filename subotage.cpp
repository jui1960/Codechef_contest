#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
         vector<int> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }

        sort(a.rbegin(),a.rend());
       
        for(int i =0; i<k && i<n; i++){
            x +=100;
            a[i]=0;
        }
        int cnt = 0;
        for(int i = 0; i<n;i++){
            if(a[i]>x)
                cnt++;
        }

        int rank = cnt+1;
        cout<<rank<<endl;
    }
    return 0;
}