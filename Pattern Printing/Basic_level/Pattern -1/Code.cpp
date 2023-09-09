//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<string> findThePattern(int N) {
        // code here
        vector<string> v1;

        int row = 1;
        char start = 'A';
        
        while(row <= N){
            string str ="";
            int col = 1;
            while(col<=N){
                if(row == 1 || row == N){
                        str = str + start;
                        start = start +1;
                    
                }
                else{
                   
                        if(col ==1 || col ==N){
                            str = str +start;
                            start = start+1;
                        }
                        else{
                            str = str + "$";
                        }
                        
                    
                }
                col = col +1;
            }
            
            v1.push_back(str);
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
        vector<string> v = ob.findThePattern(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends
