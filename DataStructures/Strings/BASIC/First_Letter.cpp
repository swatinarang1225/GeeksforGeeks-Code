
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    int n = S.length();
	    string t;
	    t = t+S[0];
	    for (int i = 1; i < n; i++){
	        
	        
    	       if(S[i] == ' '){
    	            t = t + S[i+1];
    	        }
    	        else{
    	            continue;
    	        }
	        
	    }
	    return t;
	}
};


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 
 
