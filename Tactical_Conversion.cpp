// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int n;
//         string S;
//         cin >> n >> S;

//         bool found = false;
//         for(int i = 0; i< S.size()-1;i++){
//             if(S[i]=='1' && S[i+1]=='1'){
//                 found = true;
//             }
//         }
//         if(found)
//             cout<<"No"<<endl;
//         else
//             cout<<"Yes"<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string S;
        cin >> n >> S;

        bool possible = true;
        for (int i = 0; i < n - 1; i++) {
            if (S[i] == '1' && S[i + 1] == '1') {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
