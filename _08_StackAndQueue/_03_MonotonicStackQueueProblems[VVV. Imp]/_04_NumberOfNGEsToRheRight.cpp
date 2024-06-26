//Problem Link: https://www.geeksforgeeks.org/problems/number-of-nges-to-the-right/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-nges-to-the-right


//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
        //write your code here
        vector<int> ans;
        for(int i=0;i<queries;i++){
            int count=0;
            for(int j=indices[i]+1;j<n;j++){
                if(arr[j]>arr[indices[i]]){
                    count++;
                }
            }
            ans.push_back(count);
        }
       return ans;
    }
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;
    while(t--){
       int n; cin >> n;
       vector<int> v1(n);
       for(int i = 0;i<n;i++) cin >> v1[i];
        int q; cin >> q;
        vector<int> v2(q);
        for(int i = 0;i<q;i++) cin >> v2[i];

        Solution obj;
        vector<int> ans = obj.count_NGE(n,v1,q,v2);

        for(int i = 0;i<ans.size();i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}