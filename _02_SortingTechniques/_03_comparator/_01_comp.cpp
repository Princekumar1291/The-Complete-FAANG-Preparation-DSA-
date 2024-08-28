class Solution {
  public:
    static bool myComp(const pair<int,int>& p1,const pair<int,int>& p2){
        if(p1.first==p2.first) return p1.second<p2.second;
        else return p1.first>p2.first;
    }
    vector<int> sortByFreq(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        for(auto ele:arr) mp[ele]++;
        
        vector<int> ans;
        vector<pair<int,int>> freq;
        for(auto ele:mp) freq.push_back({ele.second,ele.first});
        sort(freq.begin(),freq.end(),myComp);
        
        for(auto v:freq){
            int c=v.first;
            while(c--) ans.push_back(v.second);
        }
        return ans;
    }
};