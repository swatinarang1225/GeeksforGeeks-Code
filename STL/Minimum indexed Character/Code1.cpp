//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        set<char> str1;
        set<char> patt1;
        
        // creating set for both provided strings
        for (int i = 0; i<str.length(); i++){
            str1.insert(str[i]);
        }
        for (int i = 0; i<patt.length(); i++){
            patt1.insert(patt[i]);
        }
        
        int m = max(str1.size(),patt1.size());
        
        // creator iterators for the generated sets.
        set<char>::iterator first1 = str1.begin(); set<char>::iterator last1 = str1.end();
        set<char>::iterator first2 = patt1.begin(); set<char>::iterator last2 = patt1.end();
        
        vector<char> v1(m);
        //using set_intersection function for getting common elements.
        vector<char>:: iterator itr1 = set_intersection(first1, last1, first2 ,last2, v1.begin()); 
        
        int index[itr1 - v1.begin()];
        int i=0;

        v1.resize(itr1 - v1.begin());
        
        // storing the minimun index from first string of the comman characters in index array
        for (itr1 = v1.begin(); itr1!= v1.end(); itr1++){
            int n = str.find(*itr1);
            index[i] = n;
            i++;
        }
        int n = sizeof(index) / sizeof(index[0]);
        if (itr1 - v1.begin() != 0){
            return *min_element(index, index+n);
        }
        else{
            return -1;
        }
            
        
         
        
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
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends
