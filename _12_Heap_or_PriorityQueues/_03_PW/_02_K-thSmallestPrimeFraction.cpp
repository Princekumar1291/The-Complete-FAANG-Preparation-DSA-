//Problem Link: https://leetcode.com/problems/k-th-smallest-prime-fraction/description/


class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        vector<vector<double>> v;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                v.push_back({1.0*arr[i]/arr[j],(double)arr[i],(double)arr[j]});
            }
        }
        sort(v.begin(),v.end());
        return {(int)v[k-1][1],(int)v[k-1][2]};
    }
}; ///O(n^2)





class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        typedef pair<double,pair<int,int>> pp;
        priority_queue<pp,vector<pp>,greater<pp>> pq;
        for(int i=0;i<n;i++){
            pq.push({(double)arr[i]/arr[n-1],{i,n-1}});
        }
        int c=0;
        while(pq.size()>0){
            auto temp=pq.top();pq.pop();
            int a=temp.second.first;
            int b=temp.second.second;
            c++;
            if(c==k) return {arr[a],arr[b]};
            b--;
            if(a<b) pq.push({(double)arr[a]/arr[b],{a,b}});
        }
        return {};
    }
};// O(nlog(n))
