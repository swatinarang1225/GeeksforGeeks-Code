/{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        //declaring stack to store the previous brackets
        stack<char> vec1;
        for(int i = 0; i < x.length(); i++){
            if (vec1.empty()){
                // if the stack is empty just push the first bracket
                vec1.push(x[i]);
            }
            else if ((vec1.top() == '(' && x[i] ==')')||
            (vec1.top() == '[' && x[i] ==']')||
            (vec1.top() == '{' && x[i] =='}')){
                // performing pop function in case we found complete pair
                vec1.pop();
            }
            else{
                vec1.push(x[i]);
            }
            
            
        }
        //cout << vec1.empty() << endl;
        if (vec1.empty() == 1){
            // returning true in case stack is empty.
            return true;
        }
        else{
            return false;
        }
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
//Function Call
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
