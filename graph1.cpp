#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>
class graph
{
   public:
   unordered_map<T,list<T>>adj;
   // here add edge has a speciality 
   //bool direction 0 means undirected
   //bool direction 1 means directed
   void addEdge(T u,T v,bool direction)
   {
     adj[u].push_back(v);
     if(direction==0)
     {
        adj[v].push_back(u);
     }
   }
   void printAdjList()
   {
    for(auto i:adj)
    {
      cout<<i.first<<"->";
      for(auto j:i.second)
      {
        cout<<j<<", ";
      }
      cout<<endl;
    }
   }
   void breadthFirstSearch(int num_nodes,T start_node)
   {
    vector<T>ans;
    queue<T>q;
    unordered_map<T,bool>visited;
    q.push(start_node);
    ans.push_back(start_node);
    for(auto i: adj)
    {
        visited[i.first]=false;
    }
    visited[start_node]=true;
    while(!q.empty())
    {
        if(ans.size()==num_nodes)
        {
            break;
        }
        T temp=q.front();
        q.pop();
        for(auto i: adj[temp])
        {
            if(visited[i]==false)
            {
                q.push(i);
                ans.push_back(i);
                visited[i]=true;
            }   
        }
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
   }
};
/*
here i need a function for breadthFirstSearch
tools i have ...
1. Adjacency List in form of unordered_map<T,list<T>>adj
2.here adj stored in the form of 
adj{2->1}
   {0->3}
   {3->0,1}
   {1->3,2,4}
   {4->2}
so i ask for 
1. the number of nodes as num_nodes
2. the starting node start_node
* +++vector<T>ans
* +++queue<T>q
* +++map<int,bool>visited
    ?visited[0]->false,visited[2]->false,visited[3]->false,visited[1]->false,visited[4]->false
   *if(ans.size()==num_nodes){return ans;}
   *if(q.top()==false)
   *ans.push_back(start_node)
   *q.push(start_node)
   *visited[0]=true
   *q.pop()
   *for(auto i: adj[0])
   {
    q.push(i);
    ans.push_back(i);
   }

   
*/
int main()
{
    graph<int>g;
    //Enter number of nodes
    //Enter number of edges
    //Enter the edges.............
    int num_nodes,num_edges;
    cout<<"ENTER THE NUMBER OF NODES OF THE GRAPH"<<endl;
    cin>>num_nodes;
    cout<<"ENTER THE NUMBER OF EDGES IN THE GRAPH"<<endl;
    cin>>num_edges;
    for(int i=0;i<num_edges;i++)
    {
      int u,v;
      bool direction;
      cout<<"ENTER THE TWO NODES WITH THE PRESENCE OF DIRECTION :::: ";
      cin>>u>>v>>direction;
      g.addEdge(u,v,direction);
    }
    g.printAdjList();
    cout<<endl;
    g.breadthFirstSearch(num_nodes,0);
    cout<<endl;
    return 0;
}