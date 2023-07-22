#include <bits/stdc++.h>
#define ll long long
using namespace std;

void bfs(unordered_map<int, list<int>> &adjList,unordered_map<int, bool> &visited,
        vector<int> &traversal, int startnode)
{
    queue<int> q;
    q.push(startnode);
    visited[startnode]=true;
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        // store that frontnode in traversal vector
        traversal.push_back(frontnode);
        // traverse all neighbour of front node while also checking if it is visited or not
        for(auto it: adjList[frontnode]){
            if(!visited[it]){
                q.push(it);
                visited[it]=true; // mark it as visited 
            }
        }
    }
}
vector<int> BFStraversal(int totalvertex, vector<pair<int,int>> edges){
    unordered_map<int, bool> visited;
    unordered_map<int, list<int>> adjList;
    vector<int> traversal;
    for(auto it: edges){
        adjList[it.first].push_back(it.second);
    }
    for(auto it: adjList){
        visited[it.first]=false;
    }
    for (int vertex = 0; vertex < totalvertex; vertex++)
    {
        if(!visited[vertex]){
            bfs(adjList, visited, traversal, vertex);
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
    vector<int> a = BFStraversal(11, edge1);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}