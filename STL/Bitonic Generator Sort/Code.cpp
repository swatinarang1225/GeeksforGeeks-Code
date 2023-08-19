//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	  
	void bitonicGenerator(int arr[], int n)
	{
		// Your code goes here
		vector<int> even;
		vector<int> odd ;
		
		for(int i =0; i<n; i++){
		    if(i%2==0){
		        even.push_back(arr[i]);
		    }
		    else{
		        odd.push_back(arr[i]);
		    }
		}
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end(),greater<int>());
		
		
		
		
		int e = even.size();
		int o = odd.size();
		vector<int> v1(e+o);
		for(int i = 0 ;i<e; i++){
		    v1[i] = even[i];
		}
		for(int i = 0 ;i<o; i++){
		    v1[i+e]= odd[i];
		}
		
		
		
		for(int i = 0 ;i<v1.size(); i++){
		    arr[i] = v1[i];
		}
	}
		 

};

//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];


        

        Solution ob;
        ob.bitonicGenerator(arr, n);
        
        for (int i = 0; i < n; i++) 
        	cout << arr[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
