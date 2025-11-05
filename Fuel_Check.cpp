#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    int kl = x*y;
    if(kl>=100)
        cout<<"Yes"<<'\n';
    else
        cout<<"No"<<'\n';
    return 0;
}
