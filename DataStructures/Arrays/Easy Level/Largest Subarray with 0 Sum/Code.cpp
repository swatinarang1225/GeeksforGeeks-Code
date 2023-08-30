//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int sum = 0;
        int max_length=0;
        map<int,int> mp;
        for(int i = 0; i< n; i++){
            sum += A[i];
            if(sum == 0){
                max_length = i+1;
            }
            if(mp.find(sum) == mp.end()){
                mp[sum]= i;
            }
            else{
                
                max_length = max(max_length,i-mp[sum]);
            }
        }
       /*map<int,int>::iterator it;
       for(it = mp.begin(); it!= mp.end(); it++){
           cout<< it->first <<" "<< it->second<<endl;
       }*/
        return max_length;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
