//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    map<int,int> mp;
	    for(int i =0; i<n; i++){
	        if(mp.find(arr[i]) == mp.end()){
	            mp.insert({arr[i],1});
	        }
	        else{
	            mp[arr[i]]++;
	            }
	    }
	    
	    map<int,int>::iterator it;
	    for(it = mp.begin(); it!= mp.end();it++){
	        if(it->first == x){
	            return it->second;
	        }
	    }
	    if(mp.find(x)== mp.end()){
	        return 0;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
