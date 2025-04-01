//https://takeuforward.org/graph/introduction-to-graph/


// a graph is a collection of nodes where each node may poing to other node 
//the node represent real life entity and relationship between the nodes/entities
//mathematical defination of graphs--> graph is defined as a pair v,e
//graph is an ordered pair of set v and set e representing vertices and edges

//types of graph 
//on the basic of diraction
  // 01)undiredted graph
  // 02)directed graph

//on the basic of edge weight
  // 01)weighted
  // 02)unweighted

// graph terminology
//  01)multigraph-->an undiredted graph in which multiple edges are allowed between 2 nodes and can be self loop
// 02)simple graph--> an undirected graph in which both multiple edges and loop are not allowed and no selfloop
//03) complet graph--> in which every node is directly connected to the every node
//04) connected graph--> in this graph we have a direct and indirect path for any possible pair of vertices

//path --> path is a graph whose vertices can be arranged in a sequence
//cycle --> cycle is also graph whose vertices can be arranged in cycle sequence

//DAG --> directed acyclic graph --> directed graph having no cycle

//degree--> degree of a vertix in a graph is the total no of edeges incident toward it or away from it


//in case of directed
// 01)indegree-->in directed graph indegree of a vertiex is total no of out incoming vertices
// 01)outdegree-->in directed graph outdegree of a vertiex is total no of out going vertices

// tree --> it is a connected graph wigh no cycle if we remove all cycles from a graph we get a tree
//if we remove all cycle of a graph we get a tree
//if we remove an edege of a tree it no more remain connected and should be called forest 

//connected components --> if there is a disconnected graph then the set of vertices which are connected forms a connected components


// tree |e|= |v|-1
// forest |e|= |v|-1 max
// connected |e|= |v|-1 min
// undirected complet graph |e|= |v|C2  max
// directed complete graph |e|= |v|*|v-1| max