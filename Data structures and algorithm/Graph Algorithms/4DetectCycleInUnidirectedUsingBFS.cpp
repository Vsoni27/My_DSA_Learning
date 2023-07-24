#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool detect(int start, vector<int> adj[], vector<bool> &visited){
    visited[start] = true;
    queue<pair<int, int>> qu;
    qu.push({start, start});  // queue containing {parent, child} pair
    while(!qu.empty()){
        pair<int, int> top = qu.front();
        qu.pop();
        int currNode = top.second;
        int parent = top.first;
        for(auto vertex: adj[currNode]){
            if(!visited[vertex]){
                qu.push({currNode, vertex});
                visited[vertex] = true;
            }else if(vertex != parent) return true;// if "it" is visited and not parent of currNode then we found the cycle
        }
    }
    return false;
}

bool BFS_detection(int totalvertex, vector<pair<int,int>> edges){
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
            if (detect(vertex, adjList, visited)) return true;
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
    if(BFS_detection(11, edge1)) cout<<"Cycle detected"<<endl;
    else cout<<"No cycle present"<<endl;

    return 0;
}