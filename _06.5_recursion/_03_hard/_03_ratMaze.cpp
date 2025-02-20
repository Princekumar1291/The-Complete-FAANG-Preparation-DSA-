// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1



#include<bits/stdc++.h>
using namespace std;
  
void helper(int n,int m,int i,int j,vector<vector<bool>>& vis,vector<string>& ans,string move,vector<vector<int>> &mat){
    if(i==n-1 && j==m-1){
        ans.push_back(move);
        return ;
    }
    //move down
    if(i+1<n && vis[i+1][j]==0 && mat[i+1][j]==1){
        vis[i+1][j]=1;
        helper(n,m,i+1,j,vis,ans,move+"D",mat);
        vis[i+1][j]=0;
    }
    //move left
    if(j-1>=0 && vis[i][j-1]==0 && mat[i][j-1]==1){
        vis[i][j-1]=1;
        helper(n,m,i,j-1,vis,ans,move+"L",mat);
        vis[i][j-1]=0;
    }
    //move right
    if(j+1<m && vis[i][j+1]==0 && mat[i][j+1]==1){
        vis[i][j+1]=1;
        helper(n,m,i,j+1,vis,ans,move+"R",mat);
        vis[i][j+1]=0;
    }
    //move up
    if(i-1>=0 && vis[i-1][j]==0 && mat[i-1][j]==1){
        vis[i-1][j]=1;
        helper(n,m,i-1,j,vis,ans,move+"U",mat);
        vis[i-1][j]=0;
    }
}
vector<string> findPath(vector<vector<int>> &mat) {
    int n=mat.size();
    int m=mat[0].size();
    vector<string> ans;
    int i=0,j=0;
    vector<vector<bool>> vis(n,vector<bool>(m,0));
    
    if(mat[0][0] == 0 || mat[n - 1][m - 1] == 0) {
        return {};
    }
    vis[0][0]=1;
    helper(n,m,i,j,vis,ans,"",mat);
    return ans;
}
  


int main(){
  
  return 0;
}


void helper(int n, int m, int i, int j, vector<vector<bool>>& vis, vector<string>& ans,string move, vector<vector<int>>& mat, vector<int>& deli, vector<int>& delj, vector<string>& dels) {
    if(i == n - 1 && j == m - 1) {
        ans.push_back(move);
        return;
    }

    for(int c = 0; c < 4; c++) {
        int next_i = i + deli[c];
        int next_j = j + delj[c];

        if(next_i >= 0 && next_i < n && next_j >= 0 && next_j < m &&
            !vis[next_i][next_j] && mat[next_i][next_j] == 1) {
            vis[next_i][next_j] = true;
            helper(n, m, next_i, next_j, vis, ans, move + dels[c], mat, deli, delj, dels);
            vis[next_i][next_j] = false;
        }
    }
}

vector<string> findPath(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<string> ans;

    if(mat[0][0] == 0 || mat[n - 1][m - 1] == 0) {
        return {};
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vis[0][0] = true;

    vector<int> deli = {1, 0, 0, -1};
    vector<int> delj = {0, -1, 1, 0};
    vector<string> dels = {"D", "L", "R", "U"};

    helper(n, m, 0, 0, vis, ans, "", mat, deli, delj, dels);

    return ans;
}