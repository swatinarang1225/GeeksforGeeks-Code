//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        
        std::sort(a, a + n);
    const unsigned int m = 1000000007;
    int64_t sum = 0; // Use int64_t for better compatibility and to handle large values
    for (int i = 0; i < n; i++) {
        sum += (a[i] * i) % m; // Calculate the contribution of each element
        sum %= m; // Ensure that the sum stays within modulo m
    }
    return static_cast<int>(sum);
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends
