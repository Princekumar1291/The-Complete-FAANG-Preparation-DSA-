//maatric way --> in this approch we represent a graph edge in 2D array.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,m;
//   cout<<"Enter Number of Nodes: ";
//   cin>>n;
//   cout<<"Enter Number Of Edges: ";
//   cin>>m;
//   int adj[n+1][n+1]={0};
//   for(int i=0;i<m;i++){
//     int u,v;
//     cout<<"Enter the Node from Node A to B: ";
//     cin>>u>>v;
//     adj[u][v]=1;
//     adj[v][u]=1;
//   }

//   cout << "Adjacency Matrix:" << endl;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cout << adj[i][j] << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }  //space taken is: n*n





// //adjacency list --> in this approch we represent a graph as a array of list




// undirected graph  
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>> graph(n,vector<int>());
  for(int i=0;i<m;i++){
    int s,d;
    cin>>s>>d;
    graph[s].push_back(d);
    graph[d].push_back(s);
  }

  for(int i=0;i<n;i++){
    cout<<i<<"---->";
    for(int ele:graph[i]){
      cout<<ele<<" ";
    }
    cout<<endl;
  }
  return 0;
}   //space taken is: O(2E)




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
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,m;
//   cin>>n>>m;
//   vector<vector<pair<int,int>>> graph(n,vector<pair<int,int>>());
//   for(int i=0;i<m;i++){
//     int s,d,w;
//     cin>>s>>d>>w;
//     graph[s].push_back({d,w});
//     graph[d].push_back({s,w});
//   }

//   for(int i=0;i<n;i++){
//     cout<<i<<"---->";
//     for(auto ele:graph[i]){
//       cout<<"{"<<ele.first<<","<<ele.second<<"} ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }   