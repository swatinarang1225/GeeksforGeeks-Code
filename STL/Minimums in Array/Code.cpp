//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    
    int Find(long long A[], long long n, int a){
        for(int i = 0; i<n; i++){
            if(A[i] == a ){
                return i;
            }
        }
    }
    long long getMin(long long A[], long long B[], long long n)
    {
        // Your code goes here
        if(n == 1){
            return -1;
        }
        vector<int> vA;
        vector<int> vB;
        
        for(int i = 0; i<n;i++){
            vA.push_back(A[i]);
        }
        for(int i = 0; i<n;i++){
            vB.push_back(B[i]);
        }
        
        sort(vA.begin(),vA.end());
        sort(vB.begin(),vB.end());
        
        int i = 0;
        int MinIndex_A = -1;
        int MinIndex_B = -1;
        int Min_A = vA[i];
        int Min_B = vB[i];
        while(MinIndex_A == MinIndex_B){
            MinIndex_A = Find(A,n,Min_A);
            MinIndex_B = Find(B,n,Min_B);
            
            if(MinIndex_A != MinIndex_B){
                return Min_A + Min_B;
            }
            else{
                int sum_A = vA[i+1] + vB[i];
                int sum_B = vA[i] + vB[i+1];
                
                if(sum_A<sum_B){
                    Min_A = vA[i+1];
                    A[MinIndex_A] = 10e9;
                    
                }
                else{
                    Min_B  =vB[i+1];
                    B[MinIndex_B] = 10e9;
                }
                
                i++;
                
            }
        }
        if(MinIndex_A == MinIndex_B && i == n){
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n, i;
        cin>>n;
        long long A[n+1], B[n+1];
        for(i=0;i<n;i++)
        cin>>A[i];
    
        for(i=0;i<n;i++)
        cin>>B[i];
        Solution ob;
        cout<< ob.getMin(A, B, n) <<endl;
    }
}

// } Driver Code Ends
