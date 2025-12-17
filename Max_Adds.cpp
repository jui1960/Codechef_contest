

// #include <bits/stdc++.h>
// using namespace std;

// long long f(int x,vector<int>& a,vector<int> &v){
//     long long y = x;
//     int n = a.size();
//     for (int i = 0; i < n; i++)
//     {
//         y = max(y+v[i],(long long)a[i]);
//     }
//     return y;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         vector<int> a(n), v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
            
//         }


//              for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
            
//         }

//         long long s = 0;
//         for (int i = 1; i <= m; i++)
//         {
//             s += f(i, a, v);
//         }
//         cout<<s<<'\n';
//     }

//     return 0;
// }

//https://www.codechef.com/START217D/problems/MAXADD