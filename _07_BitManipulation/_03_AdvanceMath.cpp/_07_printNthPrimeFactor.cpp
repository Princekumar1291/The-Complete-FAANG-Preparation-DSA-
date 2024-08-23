
class Solution{
public:
    void primeFactor(int n,vector<int>& ans){
        for(int i=2;i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
                n/=i;
                while(n%i==0){
                    ans.push_back(i);
                    n/=i;
                }
            }
        }
    }
    int kthPrime(int n, int k){
        vector<int> v;
        primeFactor(n,v);
        return v.size()>=k ? v[k-1] : -1;
    }
};