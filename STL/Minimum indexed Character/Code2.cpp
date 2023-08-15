//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int n = str.size();
        int m = patt.size();
        vector <int> index;
        
        for (int i =0 ; i<patt.length();i++){
            int m = str.find(patt[i]);
            if (m!=-1){
             index.push_back(m);
            }
            
        }
        if(index.empty()){
            return -1;
        }
        else{
        return *min_element(index.begin(),index.end());
    }
        
        
         
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends
