#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        string t;
        for (int i = 0; i< s.length(); i++){
            if (s[i] == ' '){
                continue;
            }
            else{
            t = t + s[i];
            }
        }
        return t;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

