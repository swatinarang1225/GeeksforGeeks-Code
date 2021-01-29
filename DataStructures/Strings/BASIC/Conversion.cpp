#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string toLower(string S) {
       int n =S.length();
        for (int i = 0; i < n; i++){
            S[i] = tolower(S[i]);            
        }
        return S;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
