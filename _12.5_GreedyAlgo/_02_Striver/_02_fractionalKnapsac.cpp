// https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& values, vector<int>& weights, int w) {
        int n=values.size();
        vector<pair<double,pair<int,int>>> v;
        for(int i=0;i<n;i++){
            v.push_back({1.0*values[i]/weights[i],{values[i],weights[i]}});
        }
        sort(v.begin(),v.end());
        double ans=0;
        for(int i=n-1;i>=0;i--){
            int val=v[i].second.first;
            int wet=v[i].second.second;
            if(wet<w){
                ans=ans+val;
                w-=wet;
            }
            else{
                ans+=v[i].first*w;
                break;
            }
        }
        return ans;
    }
};