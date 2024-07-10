//Problem Link: https://leetcode.com/problems/last-stone-weight/description/



class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }

        while(pq.size()>=2){
            int a=pq.top();pq.pop();
            int b=pq.top();pq.pop();
            int res=abs(a-b);
            pq.push(res);
        }
        return pq.top();
    }
};