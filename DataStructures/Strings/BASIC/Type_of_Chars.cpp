#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            vector <int> count ;
            count.reserve(s.length());
            int lower = 0; 
            int upper = 0; 
            int special = 0; 
            int numeric = 0;
            for (int i = 0 ; i < s.length(); i++){
                if (isdigit(s[i])){
                    numeric = numeric + 1;
                }
                else if (isalpha(s[i])){
                    if(isupper(s[i])){
                        upper = upper + 1;
                    }
                    else{
                        lower = lower + 1;
                    }
                }
                else {
                    special = special + 1;
                }
            }
            count.push_back(upper);
            count.push_back(lower);
            count.push_back(numeric);
            count.push_back(special);
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
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal  // } Driver Code Ends
