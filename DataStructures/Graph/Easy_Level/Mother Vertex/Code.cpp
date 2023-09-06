//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    void DFS(int v, vector<bool>& visited,vector<int> adj[]){
        visited[v] = true;
        
        for(int u :adj[v]){
            if(!visited[u]){
                DFS(u,visited,adj);
            }
        }
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    vector<bool> visited(V,false);
	     int v = 0;
	     
	     for(int i = 0; i<V;i++){
	         if(visited[i] == false){
	             DFS(i,visited,adj);
	             v = i;
	             
	         }
	     }
	     fill(visited.begin(),visited.end(),false);
	     DFS(v,visited,adj);
	     for(int i = 0; i<V; i++){
	         if(visited[i]== false){
	             return -1;
	         }
	     }
	     return v;
	}
	   

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
