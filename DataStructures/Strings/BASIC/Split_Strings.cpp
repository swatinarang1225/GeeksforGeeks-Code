#include<bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        // code here 
        vector <string> s4;
        s4.reserve(S.length());
        string A1,D2,S3;
        for(int i = 0; i < S.length(); i++){
            if (isdigit(S[i])){
                D2 = D2 + S[i];
            }
            else if (isalpha(S[i])){
                A1 = A1 + S[i];
            }
            else{
                S3 = S3 + S[i];
            }
        }
        s4.push_back(A1);
        s4.push_back(D2);
        s4.push_back(S3);
        return s4;
    } 
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if(result[i] == "")
                cout<<-1<<"\n";
            else
                cout<<result[i]<<"\n";
        }
    }
    return 0; 
} 
