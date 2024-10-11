class Solution {
public:
    string getPermutation(int n, int k) {
        string temp;
        for(int i=1;i<=n;i++) temp+=to_string(i);
        for(int i=2;i<=k;i++){
            next_permutation(temp.begin(),temp.end());
        }
        return temp;
    }
};