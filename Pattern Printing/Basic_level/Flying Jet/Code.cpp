//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int Nth_mileSpeed(int n){
   	    // Code here
   	    long long res = 7;
   	    if(n%2 == 0){
   	        int r = n/2;
   	        while(r>1){
   	            res = res*3;
   	            r = r-1;
   	        }
   	    }
   	    else{
   	        int r = n/2;
   	        res = (n + r*r);
   	        res = res*res;
   	        
   	    }
   	        
   	    
   	    return res;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.Nth_mileSpeed(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
