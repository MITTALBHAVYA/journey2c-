//i am doing this by khan's algorithm
#include <bits/stdc++.h> 
void topoSort(int node,unordered_map<int,list<int> > adj,vector<bool> &visited,stack<int> &st) 
{    visited[node]=1;   
      for(auto i: adj[node])
          {
                    if(!visited[i])
                            {
                                            topoSort(i,adj,visited,st);
                            }
          } 
             st.push(node);
}
 vector<int> topologicalSort(vector<vector<int> > &edges, int v, int e)
   { 
       //making adjacency list
           unordered_map<int,list<int> > adj;
                   for(int i=0;i<e;i++)
                       {    
                            int x=edges[i][0];   
                            int y=edges[i][1]; 
                            adj[x].push_back(y);  
                       } 
                                  //calling topo function for all the components
                                      vector<bool> visited(v);
                                          stack<int> st;
                                              for(int i=0;i<v;i++)    {        if(!visited[i])        {            topoSort(i,adj,visited,st);        }    }    //putting the element in the stack into the vector    vector<int> ans;    while(!st.empty())    {        ans.push_back(st.top());        st.pop();    }    return ans;     }