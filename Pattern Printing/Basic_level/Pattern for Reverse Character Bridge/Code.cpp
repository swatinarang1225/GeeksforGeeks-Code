//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    string Reverse(string s){
        string rev = "";
        int n = s.length();
        for(int i = n-1; i>=0 ;i--){
            rev = rev + s[i];
            
        }
        return rev;
    }
    vector<string> revCharBridge(int N) {
        // code here
        vector<string> v1;
        string rev= "";
        
        
        int row =1;
        while(row<=N){
            string st = "";
            
            // printing first triangle
            char start = 'A';
            int col = 1;
            while(col<=(N-row+1)){
                st = st + start;
                start = start + 1;
                col = col +1;
            }
            
            rev = st;
            
            // print spaces--- second triangle
            
            int space = 1;
            while(space<= (2*row -3)){
                st = st+" ";
                space = space +1;
            }
            
            //printing third triangle
            string r = Reverse(rev);
            if(row == 1){
             st = st + r.substr(1,r.length()-1);   
            }
            else{
                st = st + r;
            }
            v1.push_back(st);
            row = row +1;
        }
        return v1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.revCharBridge(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends
