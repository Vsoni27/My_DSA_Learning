#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Adjancency list representation of Graph
class Graph{
public:
    unordered_map<int, list<int>> Edgelist;
    void addEdge(int u,int v, bool type){
        //type=0 -> unordered graph
        //type=1 -> ordered graph
        Edgelist[u].push_back(v);
        if(!type){
            Edgelist[v].push_back(u);
        }
    }
    void printGraph(){
        for(auto it: Edgelist){
            cout<<it.first<<"-> ";
            for(auto it1: it.second){
                cout<<it1<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int n,e;
    cout<<"Enter the no of nodes: ";
    cin>>n;
    cout<<"Entere the no of edge: ";
    cin>>e;
    Graph G;
    for (int i = 0; i < e; i++)
    {
        int u,v;
        cin>>u>>v;
        G.addEdge(u,v,0);
    }
    G.printGraph();

    return 0;
}