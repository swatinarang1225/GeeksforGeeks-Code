//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	    // Code here
	    map<char, int> m1;
	    for(int i = 0; i <patt.length(); i++){
	        int index = S.find(patt[i]);
	        if (index!=-1){
	            char c = patt[i];
	            m1.insert({c,index});
	        }
	    }
	    map<char, int>:: iterator itr1;
	    if(m1.size()== 0){
	        return"$";
	    }
	    
	    else{
	        int min_value = INT_MAX;
	        string min_char;
	        
	        for(itr1 = m1.begin(); itr1!=m1.end(); itr1++){
	            if(itr1->second < min_value){
	                min_value = itr1->second;
	                min_char = itr1->first;
	            }
	        }
	        //string c = S[min_value];
	        return min_char;
	        
	    }
	}
	    
	
	    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}
// } Driver Code Ends
