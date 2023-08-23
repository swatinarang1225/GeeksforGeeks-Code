//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    struct Marks{
        int phy1;
        int chem1;
        int math1;
        
        Marks(int phy1, int chem1, int math1)
        : phy1(phy1), chem1(chem1), math1(math1)
    {
    }
        
        
        
    };
    struct Comapre{
        bool operator()(Marks const& a, Marks const& b ){
            if(a.chem1 == b.chem1 && a.phy1 == b.phy1){
                return a.math1>b.math1;
            }
            else if (a.phy1 == b.phy1){
                return a.chem1<b.chem1;
            }
            else{
                return a.phy1>b.phy1;
            }
            
        }
    };
    
    
    void customSort (int phy[], int chem[], int math[], int N)
    {
        // your code here
        
        priority_queue<Marks,vector<Marks>,Comapre> pq;
        
        for (int i = 0;i<N;i++){
            Marks k = Marks(phy[i],chem[i],math[i]);
            pq.push(k);
        }
        int i = 0;
        while(!pq.empty()){
            Marks k = pq.top();
            phy[i] = k.phy1;
            chem[i] = k.chem1;
            math[i] = k.math1;
            pq.pop();
            i++;
        }
        
    } 
};

//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int phy[n];
		int chem[n];
		int math[n];
		for (int i = 0; i < n; ++i)
			cin >> phy[i] >> chem[i] >> math[i];
        Solution ob;
		ob.customSort (phy, chem, math, n);
		for (int i = 0; i < n; ++i)
			cout << phy[i] << " " << chem[i] << " " << math[i] << endl; 
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
