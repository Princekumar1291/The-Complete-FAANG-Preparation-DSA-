//Problem Link: https://leetcode.com/problems/reorganize-string/description/

class Solution {
public:
    string reorganizeString(string s) {
        if(s.size()==1) return s;
        unordered_map<char,int> mp;
        for(auto ele:s) mp[ele]++;

        priority_queue<pair<int,int>> pq;
        for(auto ele:mp) pq.push({ele.second,ele.first});

        string ans="";
        while(pq.size()>1){
            auto a=pq.top();pq.pop();
            auto b=pq.top();pq.pop();
            ans+=a.second;
            ans+=b.second;
            if(a.first>1) pq.push({a.first-1,a.second});
            if(b.first>1) pq.push({b.first-1,b.second});
        }
        if(pq.size()==0) return ans;
        else{
            if(pq.top().first>1) return "";
            else if(pq.top().second==ans.back()) return "";
            else ans+=pq.top().second;
        }
        return ans;

    }
};