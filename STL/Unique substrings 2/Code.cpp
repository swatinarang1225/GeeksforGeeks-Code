//{ Driver Code Starts



#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends






class Solution
{
	public:
		long int unique_substring_sum(string s, int k)
		{
		    // Code here
		    set<string> s1;
		    int  count =0;
		    int j = 0;
		    if(s.length()%k !=0){
		        return -1;
		    }
		    while(j<s.length()){
		        string substring = s.substr(j,k);
		        s1.insert(substring);
		        j=j+k;
		    }
	
		    set<string>::iterator it;
		    for(it = s1.begin(); it != s1.end();it++){
		        count =count+stoi(*it,0,2);
		        
		    }
		    return count;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s;
    	int k;
    	cin >> s >> k;
        Solution ob;
    	long int ans  = ob.unique_substring_sum(s, k);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends
