#include <bits/stdc++.h>
#define ll long long
using namespace std;

void BFS(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> adjlist){
    queue<int> q;
    q.push(node);
    visited[node] = true;
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        visited[frontnode] = true;
        for(auto it: adjlist[frontnode]){
            if(!visited[it]){
                visited[it]=true;
                q.push(it);
            }
        }
    }
}

bool check(int node, vector<pair<int,int>> edges){
    unordered_map<int, bool> visited;
    unordered_map<int, list<int>> adjlist;
    for(auto it: edges){
        adjlist[it.first].push_back(it.second);
    }
    for(auto it:adjlist){
        visited[it.first]=false;
    }
    BFS(node, visited,adjlist);
    for(auto it: visited){
        if(!it.second){
            return false;
        }
    }
    return true;
}

int main()
{
    vector<pair<int,int>> edge ={
        {0,1},{4,1},{1,2},{2,3},{3,2}
    };
    vector<pair<int,int>> edge1 ={
        {0,1},{4,1},{1,2},{2,3},{3,2},{1,4},{2,1},{1,0}
    };
    if(check(0,edge)){
        cout<<"Strongly connected"<<endl;
    }
    else cout<<"Not strongly connected"<<endl;
    if(check(0,edge1)){
        cout<<"Strongly connected"<<endl;
    }
    else cout<<"Not strongly connected"<<endl;
    return 0;
}