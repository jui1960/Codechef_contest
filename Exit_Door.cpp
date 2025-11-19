// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<ll> v(n);
//         vector<ll> p(n + 1);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//             p[v[i]] = i;
//         }

//         vector<bool> left(n, true);
//         ll a = 0;
//         for (int j = n; j >= 1; j--)
//         {
//             int i = p[j];

//             int l = 0, r = 0;
//             for (int k = 0; k < i; k++)

//             {
//                 if (left[k])
//                     l++;
//             }

//             for (int k = i + 1; k < n; k++)

//             {
//                 if (left[k])
//                     r++;
//             }
//             a += min(l, r);
//             left[i] = false;
//         }
//         cout << a << '\n';
//     }

//     return 0;
// }

