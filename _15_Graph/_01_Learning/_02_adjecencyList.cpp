//adjacency list --> in this approch we represent a graph as a array of link list

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
int v;
void add_edge(int src,int dest,bool bidir=true){
  graph[src].push_back(dest);
  if(bidir) graph[dest].push_back(src);
}

void display(){
  for(int i=0;i<graph.size();i++){
    cout<<i<<" -> ";
    for(auto ele:graph[i]){
      cout<<ele<<" , ";
    }cout<<endl;
  }
}

int main(){
  cin>>v;
  graph.resize(v,vector<int>());

  int e;
  cin>>e;
  while(e--){
    int s,d;
    cin>>s>>d;
    add_edge(s,d);
  }
  display();
  return 0;
}