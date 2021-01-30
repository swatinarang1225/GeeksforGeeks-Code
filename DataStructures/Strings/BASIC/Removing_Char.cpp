#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	

	string removeCharacters(string S) 
	{
	    // Your code goes here
	    string t;
	    for(int i = 0; i < S.length(); i++){
	        if(isdigit(S[i])){
	            t = t + S[i];
	            
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
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		Solution ob;
   		cout << ob.removeCharacters(s) << "\n";
   		
   	}

    return 0;
