// https://www.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1

//brut

class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                int mini=INT_MAX;
                for(int k=j;k<j+i+1;k++){
                    mini=min(mini,arr[k]);
                }
                ans[i]=max(ans[i],mini);
            }
        }
        return ans;
    }
};

//beter

class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            int mini=INT_MAX;
            for(int j=i;j<n;j++){
                mini=min(mini,arr[j]);
                ans[j-i]=max(ans[j-i],mini);
            }
        }
        return ans;
    }
};

// best 

class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> nextSmaller(n,0);
        vector<int> prevSmaller(n,0);
        stack<pair<int,int>> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first>=arr[i]) st.pop();
            if(st.size()==0) prevSmaller[i]=-1;
            else prevSmaller[i]=st.top().second;
            st.push({arr[i],i});
        }
        stack<pair<int,int>> temp;
        st.swap(temp);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first>=arr[i]) st.pop();
            if(st.size()==0) nextSmaller[i]=n;
            else nextSmaller[i]=st.top().second;
            st.push({arr[i],i});
        }
        vector<int> len(n,0);
        for(int i=0;i<n;i++){
            len[i]=nextSmaller[i]-prevSmaller[i]-1;
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            int windowSize=len[i];
            ans[windowSize-1]=max(ans[windowSize-1],arr[i]);
        }
        for(int i=n-2;i>=0;i--) ans[i]=max(ans[i],ans[i+1]);
        return ans;
    }
};
