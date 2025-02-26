// https://leetcode.com/problems/largest-rectangle-in-histogram/


class Solution {
  public:
      int largestRectangleArea(vector<int>& arr) {
          int n=arr.size();
          vector<int> nextSmaller(n,n);
          vector<int> prevSmaller(n,-1);
          
          stack<int> st;
          
          for(int i=n-1;i>=0;i--){
              while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
              if(st.size()==0) nextSmaller[i]=n;
              else nextSmaller[i]=st.top();
              st.push(i);
          }
          
          stack<int> temp;
          st.swap(temp);
          
          for(int i=0;i<n;i++){
              while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
              if(st.size()==0) prevSmaller[i]=-1;
              else prevSmaller[i]=st.top();
              st.push(i);
          }
          
          int ans=0;
          for(int i=0;i<n;i++){
              ans=max(ans,(nextSmaller[i]-prevSmaller[i]-1)*arr[i]);
          }
          
          return ans;
      }
  };