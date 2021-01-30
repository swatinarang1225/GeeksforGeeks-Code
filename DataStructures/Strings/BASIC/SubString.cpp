#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    string javaSub(string S, int L, int R) {
        // code here
        string t;
        for (int i = L; i <= R; i++){
            t = t + S[i];
        }
        return t;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout << ob.javaSub(S, L, R) << endl;
    }
    return 0;
}
