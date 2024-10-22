// Problem Link: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1



//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        if(K>N) return 0;
        long sum=0;
        for(int i=0;i<K;i++) sum+=Arr[i]; 
        long ans=sum;
        for(int i=K;i<N;i++){
            sum=sum+Arr[i]-Arr[i-K];
            ans=max(ans,sum);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends