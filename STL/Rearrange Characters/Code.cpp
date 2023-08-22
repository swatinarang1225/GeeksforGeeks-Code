//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

// } Driver Code Ends
class Solution
{
    public:
    struct Key{
        int freq;
        char c;
        
        bool operator<(const Key& k) const
        {
        return freq < k.freq;
        }
    };
    
    int Count(string str, char s){
        int count = 0;
        for(int i = 0; i<str.length(); i++){
            if (str[i]==s){
                count++;
            }
        }
        return count;
    }
    
    string rearrangeString(string str)
    {
        //code here
        string out="";
        priority_queue<Key> pq;
        
        set<char> s1;
        for(int i = 0; i <str.length(); i++){
            s1.insert(str[i]);
        }
        
        set<char>::iterator it;
        for(it = s1.begin(); it!= s1.end(); it++){
            //cout<< Count(str,*it)<< endl;
            pq.push(Key{Count(str,*it),*it});
            
        }
        int n = str.length();
        Key prev = {-1,'#'};
        while(!pq.empty()){
            Key k = pq.top();
            if(k.freq > (n+1)/2){
                return "-1";
            }
            pq.pop();
            out = out + k.c;
            
            if (prev.freq>0){
                pq.push(prev);
            }
            
            k.freq--;
            prev = k;

        }
  
        return out;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution ob;
	    string str1=ob.rearrangeString(str);
	    int flag=1;
	    int c[26] = {0};
	    for(int i=0; i<str.length(); i++)
	        c[str[i]-'a']+=1;
	    int f = 0;
	    int x = (str.length()+1)/2;
	    for(int i=0; i<26; i++)
	    {
	        if(c[i]>x)
	            f = 1;
	    }
	    if(f)
	    {
	        if(str1=="-1")
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	    }
	    else
	    {
    	    int a[26] = {0};
    	    int b[26] = {0};
    	    for(int i=0; i<str.length(); i++)
    	        a[str[i]-'a']+=1;
    	    for(int i=0; i<str1.length(); i++)
    	        b[str1[i]-'a']+=1;
    	        
    	    for(int i=0; i<26; i++)
    	        if(a[i]!=b[i])
    	            flag = 0;
    	    
    	    for(int i=0;i<str1.length();i++)
    	    {
    		    if(i>0)
    		        if(str1[i-1]==str1[i])
    			        flag=0;
    	    }
    	    if(flag==1)
    		    cout<<"1\n";
    	    else
    	        cout<<"0\n";
	    }
	}
    return 0;
}
// } Driver Code Ends
