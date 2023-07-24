#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool detect(int start, int parent, vector<int> adj[], vector<bool> &visited){
    visited[start] = true; // mark the current node as visited
    for(auto it: adj[start]){
        if(!visited[it]){
            // now start will be parent for it
            if(detect(it, start, adj, visited)) return true;// if in any part of the recursion tree we found any cycle we simply return
        }else if(it!=parent) return true;// main condition for cycle if the current node is already present and it's not the parent node we have a cycle here
    }
    return false;
}

bool DFS_detection(int totalvertex, vector<pair<int,int>> edges){
    vector<bool> visited(totalvertex, false);
    vector<int> adjList[totalvertex];
    vector<int> traversal;
    for(auto it: edges){
        adjList[it.first].push_back(it.second);
        adjList[it.second].push_back(it.first);
    }
    for (int vertex = 0; vertex < totalvertex; vertex++)
    {
        if(!visited[vertex]){
            if (detect(vertex, vertex, adjList, visited)) return true;
        }
    }
    return false;
}

int main()
{
    vector<pair<int,int>> edge ={
        {0,3},{3,1},{1,2},{1,4}
    };
    vector<pair<int, int>> edge1 = {
        {0,1}, {0,3}, {1,2}, {2,3}, {2,6}, {5,6}, {2,5}, {7,8}, {8,9}, {9,7}, {9,10}
    };
    if(DFS_detection(11, edge1)) cout<<"Cycle detected"<<endl;
    else cout<<"No cycle present"<<endl;

    return 0;
}