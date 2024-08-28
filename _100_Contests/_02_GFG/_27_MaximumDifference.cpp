// Problem Link: https://www.geeksforgeeks.org/problems/maximum-difference-1587115620/1




class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        int n=arr.size();
        vector<int> l;
        
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            if(st.empty()) l.push_back(0);
            else l.push_back(st.top());
            st.push(arr[i]);
        }
        
        stack<int> stt;
        vector<int> r;
        for(int i=n-1;i>=0;i--){
            while(!stt.empty() && stt.top()>=arr[i]){
                stt.pop();
            }
            if(stt.empty()) r.push_back(0);
            else r.push_back(stt.top());
            stt.push(arr[i]);
        }
        reverse(r.begin(),r.end());
        
        int ans=0;
        for(int i=0;i<n;i++){
            int temp=abs(l[i]-r[i]);
            ans=max(ans,temp);
        }
        return ans;
    }
};