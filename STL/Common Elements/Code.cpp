//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        //vector<int>::iterator first1 = v1.begin(); vector<int>::iterator last1 = v1.end();
        //vector<int>::iterator first2 = v2.begin(); vector<int>::iterator last2 = v2.end();
        int mini = min(v1.size(),v2.size());
        vector<int> v3(mini);
        vector<int>::iterator itr1 = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
        
        v3.resize(itr1-v3.begin());
        return v3;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}
// } Driver Code Ends
