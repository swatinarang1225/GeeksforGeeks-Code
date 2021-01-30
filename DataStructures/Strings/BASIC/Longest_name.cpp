#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    string longest(string names[], int n)
    {
        int max = names[0].length();
        int length;
        int counter = 0;
        for (int i = 0; i < n; i++){
            length = names[i].length();
            if (length > max ){
                max = length;
                counter = i;
            }
        }
        return names[counter];   
        
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}
