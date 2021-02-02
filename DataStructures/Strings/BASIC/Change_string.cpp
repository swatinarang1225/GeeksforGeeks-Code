#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    
    string modify (string s)
    {
        // your code here
        int n = s.length();
        
        if(isupper(s[0])){
            for (int i=0; i< n;i++){
                s[i] = toupper(s[i]);
            }
        }
        else{
            for (int i=0; i< n;i++){
                s[i] = tolower(s[i]);
            }
        }
        return s;
        
    }
};


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}  
