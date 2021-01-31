#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
        bool check (string s)
        {
            
        	for(int i = 0; i <s.length()-1; i++){
        	    if (s[i] == s[i+1]){
        	        continue;
        	    }
        	    else{
        	        return false;
        	    }
        	}
        	return true;
        	
        }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}
