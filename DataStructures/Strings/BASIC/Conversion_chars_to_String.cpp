#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        //code here
        string t;
        for (int i =0; i < n; i++){
            if (arr[i] == ' '){
                continue;
            }
            else{
                t = t + arr[i];
            }
        }
        return t;
    }
};


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        Solution ob;
        
        cout<<ob.chartostr(arr,n)<<endl;

    }
}
  
