#include <bits/stdc++.h>
#define ll long long
using namespace std;

void dfs(int start, vector<int> &ans, vector<int> adj[], vector<bool> &visited){
    visited[start] = true;
    ans.push_back(start);
    for(auto it: adj[start]){
        if(!visited[it]){
            dfs(it, ans, adj, visited);
        }
    }
}

vector<int> DFStraversal(int totalvertex, vector<pair<int,int>> edges){
    vector<bool> visited(totalvertex, false);
    vector<int> adjList[totalvertex];
    vector<int> traversal;
    for(auto it: edges){
        adjList[it.first].push_back(it.second);
    }
    for (int vertex = 0; vertex < totalvertex; vertex++)
    {
        if(!visited[vertex]){
            dfs(vertex, traversal, adjList, visited);
        }
    }
    return traversal;
}

int main()
{
    vector<pair<int,int>> edge ={
        {0,3},{3,0},{3,1},{1,3},{1,2},{2,1},{1,4},{4,1}
    };
    vector<pair<int, int>> edge1 = {
        {0,1}, {0,3}, {1,2}, {2,3}, {2,6}, {5,6}, {2,5}, {7,8}, {8,9}, {9,7}, {9,10}
    };
    vector<int> a = DFStraversal(11, edge1);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}