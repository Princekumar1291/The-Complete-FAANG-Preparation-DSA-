//Problem Link: https://leetcode.com/problems/number-of-islands/description/



class Solution {
public:
    void helper(int i,int j,vector<vector<int>>& vis,vector<vector<char>>& grid){
        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j]=1;
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int nRow=row+delRow[k];
                int nCol=col+delCol[k];
                if(nRow>=0 && nRow<grid.size() && nCol>=0 && nCol<grid[0].size() && vis[nRow][nCol]==0 && grid[nRow][nCol]=='1'){
                    vis[nRow][nCol]=1;
                    q.push({nRow,nCol});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]=='1'){
                    ans++;
                    helper(i,j,vis,grid);
                }
            }
        }
        return ans;
    }
};