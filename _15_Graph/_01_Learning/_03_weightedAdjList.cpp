//adjacency list --> in this approch we represent a graph as a array of link list 

#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>> graph;
int v;
void add_edge(int src,int dest,int wt,bool bidir=true){
  graph[src].push_back({dest,wt});
  if(bidir) graph[dest].push_back({src,wt});
}

void display(){
  for(int i=0;i<graph.size();i++){
    cout<<i<<" -> ";
    for(auto ele:graph[i]){
      cout<<"("<<ele.first<<","<<ele.second<<"),";
    }cout<<endl;
  }
}

int main(){
  cin>>v;
  graph.resize(v,vector<pair<int,int>>());

  int e;
  cin>>e;
  while(e--){
    int s,d,w;
    cin>>s>>d>>w;
    add_edge(s,d,w);
  }
  display();
  return 0;
}