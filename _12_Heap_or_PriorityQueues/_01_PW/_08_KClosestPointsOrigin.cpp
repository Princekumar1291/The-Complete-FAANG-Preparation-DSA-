//Problem Link: https://leetcode.com/problems/k-closest-points-to-origin/description/




class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<double>> v1;
        for(int i=0;i<points.size();i++){
            double dis=sqrt(points[i][0]*points[i][0]+points[i][1]*points[i][1]);
            cout<<dis<<" ";
            v1.push_back({dis,(double)points[i][0],(double)points[i][1]});
            cout<<v1[i][0]<<" ";
        }
        sort(v1.begin(),v1.end());

        vector<vector<int>> ans;
        for(int i=0;i<k;i++){
            ans.push_back({(int)v1[i][1],(int)v1[i][2]});
        }

        return ans;
    }
};