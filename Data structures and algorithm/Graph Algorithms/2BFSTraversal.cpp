#include <bits/stdc++.h>
#define ll long long
using namespace std;

void bfs(unordered_map<int, list<int>> &adjList,unordered_map<int, bool> &visited, 
        vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node]=true;
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        // store that frontnode in ans vecto
        ans.push_back(frontnode);
        // traverse all neighbour of front node
        for(auto it: adjList[frontnode]){
            if(!visited[it]){
                q.push(it);
                visited[it]=true;
            }
        }
    }
}
// vertex is the last index of
vector<int> BFStraversal(int vertex, vector<pair<int,int>> edges){
    unordered_map<int, bool> visited;
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    for(auto it: edges){
        adjList[it.first].push_back(it.second);
    }
    for(auto it: adjList){
        visited[it.first]=false;
    }
    for (int i = 0; i < vertex; i++)
    {
        if(!visited[i]){
            bfs(adjList, visited, ans, i);
        }
    }
    return ans;
}

int main()
{
    vector<pair<int,int>> edge ={
        {0,3},{3,0},{3,1},{1,3},{1,2},{2,1},{1,4},{4,1}
    };
    vector<int> a = BFStraversal(5, edge);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}