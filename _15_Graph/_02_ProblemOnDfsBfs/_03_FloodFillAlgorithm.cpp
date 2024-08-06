//Problem Link: https://leetcode.com/problems/flood-fill/description/




class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int cc=image[sr][sc];
        queue<pair<int,int>> q;
        vector<vector<int>> vis(n,vector<int>(m,-1));
        q.push({sr,sc});
        vector<int> ri={-1,0,1,0};
        vector<int> ci={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            vis[r][c]=color;
            for(int i=0;i<4;i++){
                int nr=r+ri[i];
                int nc=c+ci[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==cc && vis[nr][nc]==-1){
                    vis[nr][nc]=color;
                    q.push({nr,nc});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==-1) vis[i][j]=image[i][j];
            }
        }
        return vis;
    }
};