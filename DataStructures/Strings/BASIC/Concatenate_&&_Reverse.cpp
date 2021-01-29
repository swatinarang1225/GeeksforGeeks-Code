
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string conRevstr(string S1, string S2) {
        string S3 = S1 + S2;
        string S4 = S3;
        for (int i=S4.length()-1; i >= 0; i--){
            int j = S4.length()-1 - i ;
            S3[j] = S4[i];
            
        }
       
        return S3;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.conRevstr(S1, S2) << endl;
    }
    return 0;
}
  // } Driver Code Ends
