// //adjacency list --> in this approch we represent a graph as a array of list







//undirected graph
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,m;
//   cin>>n>>m;
//   vector<vector<int>> graph(n,vector<int>());
//   for(int i=0;i<m;i++){
//     int s,d;
//     cin>>s>>d;
//     graph[s].push_back(d);
//     graph[d].push_back(s);
//   }

//   for(int i=0;i<n;i++){
//     cout<<i<<"---->";
//     for(int ele:graph[i]){
//       cout<<ele<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }   //O(2E)




// //directed graph
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,m;
//   cin>>n>>m;
//   vector<vector<int>> graph(n,vector<int>());
//   for(int i=0;i<m;i++){
//     int s,d;
//     cin>>s>>d;
//     graph[s].push_back(d);
//   }

//   for(int i=0;i<n;i++){
//     cout<<i<<"---->";
//     for(int ele:graph[i]){
//       cout<<ele<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }   //O(E)




//weighted graph
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<pair<int,int>>> graph(n,vector<pair<int,int>>());
  for(int i=0;i<m;i++){
    int s,d,w;
    cin>>s>>d>>w;
    graph[s].push_back({d,w});
    graph[d].push_back({s,w});
  }

  for(int i=0;i<n;i++){
    cout<<i<<"---->";
    for(auto ele:graph[i]){
      cout<<"{"<<ele.first<<","<<ele.second<<"} ";
    }
    cout<<endl;
  }
  return 0;
}   