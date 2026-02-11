#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    if(100+4*n>300){
        cout<<300<<'\n';
    }
    else cout<<100+4*n<<'\n';

    return 0;
}