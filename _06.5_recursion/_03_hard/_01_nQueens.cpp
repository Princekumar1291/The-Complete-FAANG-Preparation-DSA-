class Solution {
public:
    bool isSafe(int row,int col,int n,vector<string> temp){
        int r=row;
        int c=col;
        while(row>=0 && col>=0){
            if(temp[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=r;
        col=c;
        while(col>=0){
            if(temp[row][col]=='Q') return false;
            col--;
        }
        row=r;
        col=c;
        while(col>=0 && row<n){
            if(temp[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }

    void helper(int n,vector<string> temp,vector<vector<string>>& ans,int col){
        if(col==n){
            ans.push_back(temp);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,n,temp)){
                temp[row][col]='Q';
                helper(n,temp,ans,col+1);
                temp[row][col]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        string str(n,'.');
        vector<string> temp(n,str); 
        vector<vector<string>> ans;
        int col=0;
        helper(n,temp,ans,col);
        return ans;
    }
};