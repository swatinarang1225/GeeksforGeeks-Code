//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> deleteElement(int arr[],int n,int k);

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        vector<int> v;
        
        v = deleteElement(arr,n,k);
        vector<int>::iterator it;
         for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        
    }
return 0;
}

// } Driver Code Ends


vector<int> deleteElement(int arr[],int n,int k)
{
    // complete the function
   stack<int> s1;
   int count = 0;
   s1.push(arr[0]);
   for(int i = 1; i<n;i++){
      while(!s1.empty() && s1.top()< arr[i] && count <k){
          s1.pop();
          count++;
      }
      s1.push(arr[i]);
   
 }
 int m = s1.size();
   vector<int> v1(m);
   while(!s1.empty()){
       v1[--m] = s1.top();
       s1.pop();
   }
   return v1;
   
    
}
