//Problem Link: https://www.geeksforgeeks.org/problems/topological-sort/1





class Solution{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int v, vector<int> adj[]) {
	    vector<int> inDegree(v,0);
	    for(int i=0;i<v;i++){
	        for(int ele:adj[i]){
	            inDegree[ele]++;
	        }
	    }
	    
	    queue<int> q;
	    
	    for(int i=0;i<v;i++){
	        if(inDegree[i]==0) q.push(i);
	    }
	    
	    vector<int> topoSort;
	    while(!q.empty()){
	        int curr=q.front();
	        q.pop();
	        topoSort.push_back(curr);
	        for(int ele:adj[curr]){
	            inDegree[ele]--;
	            if(inDegree[ele]==0) q.push(ele);
	        }
	    }
	    return topoSort;
	}
};