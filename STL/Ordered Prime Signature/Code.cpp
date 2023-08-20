//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
    vector<int> orderedPrime(int n){
        vector<int>v1;
        vector<int>v2;
        for(int i = 1; i<=n;i++){
            if(n%i==0){
               v1.push_back(i); 
            }
        }
        
        for(int i = 0;i<v1.size();i++){
            if(isPrime(v1[i])){
                int count = 0;
                while(n>0 && n%v1[i] == 0){
                    count++;
                    n = n/v1[i];
                }
                v2.push_back(count);
            }
        }
        sort(v2.begin(),v2.end());
        v2.push_back(v1.size());
        return v2;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.orderedPrime(n);
        for(int i = 0;i < ans.size()-1;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        cout<<ans[ans.size()-1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends
