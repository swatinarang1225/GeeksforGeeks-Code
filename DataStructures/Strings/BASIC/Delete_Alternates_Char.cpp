#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	//code here.
    	int n = s.length();
    	int count = 0;
    	for (int i = 0; i < n ; i++){
    	    if (s[i] >= 'A' && s[i]<= 'Z'){
    	    count = count + 1;
    	    }
    	    else {
    	        continue;
    	    }
    	}
    	return count;
    }
};

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.countCamelCase (s) << '\n';
	}
}
