//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        //printing above triangle
        int row1 = 1;
        while(row1<= n){
            int space1 = n-row1;
            while(space1){
                cout <<" ";
                space1 = space1-1;
            }
            
            int col1 = 1;
            
            while(col1<=row1){
                cout<<"*"<<" ";
                col1 = col1 +1;
            }
            cout<<endl;
            row1 = row1+1;
        }
        
        //printing below triangle
        int row = 1;
        while(row <= n){
            
            int space = row - 1;
            while(space){
                cout <<" ";
                space = space-1;
            }
            int col = 1;
            while(col<= n-row+1){
                cout <<"*"<<" ";
                col = col+1;
            }
            cout<<endl;
            row = row + 1;
            
            
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends
