 #include <bits/stdc++.h>
 #define ll long long
 using namespace std;

 void dfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited,
        vector<vector<int>> &ans, int node)
{
    // stack<int> stk;
    // stk.push(node);
    // visited[node]=true;
    // while(!stk.empty()){

    // }
    ans.push_back(node);

}

 vector<vector<int>> DFStraversal(int V, int E, vector<vector<int>> &edges){
    // prepare adjList
    unordered_map<int, list<int>> adjList;
    for (int i = 0; i < edges.size(); i++)
    {
        adjList[edges[i][0]].push_back(edges[i][1]);
    }
    unordered_map<int, bool> visited;
    for(auto it: adjList){
        visited[it.first] = false;
    }
    vector<vector<int>> ans;
    for (int i = 0; i < V; i++)
    {
        if(!visited[i]){
            vector<int> comp;
            dfs(adjList, visited, ans, i);
    
        }
    }
    
 }
 
 int main()
 {
    
 
    return 0;
 }