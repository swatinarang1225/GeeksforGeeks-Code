//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void printTriangleDownwards(string str)
    {
        // Write Your Code here
        int row = 1;
        while(row <= str.length()){
            
            //Print "." first
            int dot = str.length() - row;
            while(dot){
                cout<<".";
                dot = dot -1;
            }
            
            //print the string character as per pattern
            int col = 0;
            while(col<row){
                cout<< str[col];
                col = col +1;
            }
            cout<<endl;
            row = row+1;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        Solution ob;
        ob.printTriangleDownwards(str);
    }
    return 0;
}
// } Driver Code Ends
