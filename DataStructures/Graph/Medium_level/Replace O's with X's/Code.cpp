//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void convert(vector<vector<char>>& mat, int n, int m){
        for(int i = 0; i<n; i++){
            for(int j =0; j<m; j++){
                
                if(mat[i][j] == 'O'){
                    mat[i][j] = 'X';
                }
                if(mat[i][j] == 'B'){
                    mat[i][j] = 'O';
                }
                
            }
            
        }
    }
        
    bool Isvalid(int i, int j, int n, int m, vector<vector<char>>& mat){
        if(i>=0 && i<n && j>=0 && j<m && mat[i][j] == 'O'){
            return true;
        }
        return false;
    }
    
    void dfs(vector<vector<char>>& mat, int i, int j, int n, int m){
       
        mat[i][j] = 'B';
       
        if(Isvalid(i+1,j,n,m,mat)){
            dfs(mat,i+1,j,n,m);
        }
        if(Isvalid(i-1,j,n,m,mat)){
            dfs(mat,i-1,j,n,m);
        }
        if(Isvalid(i,j+1,n,m,mat)){
            dfs(mat,i,j+1,n,m);
        }
        if(Isvalid(i,j-1,n,m,mat)){
            dfs(mat,i,j-1,n,m);
        }
    }
    
    vector<vector<char>> fill(int n, int m, vector<vector<char>>& mat)
    {
        // code here
        for(int i = 0; i<n; i++){
            // left->top to bottom
            int j = 0;
            if(mat[i][j] == 'O'){
                dfs(mat,i,j,n,m);
            }
            
            // right -> top to bottom
            j = m-1;
            if(mat[i][j] == 'O'){
                dfs(mat,i,j,n,m);
            }
        }
        for(int j = 0; j<m; j++){
            // top->left to right
            int i = 0;
            if(mat[i][j] == 'O'){
                dfs(mat,i,j,n,m);
            }
            
            // bottom -> left to right
            i = n-1;
            if(mat[i][j] == 'O'){
                dfs(mat,i,j,n,m);
            }
        }
        
        convert(mat,n,m);
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
