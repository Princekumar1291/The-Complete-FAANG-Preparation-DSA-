class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low=0;
        long long high=sqrt(c);
        while(low<=high){
            long long c1=low*low+high*high;
            if(c1==c) return true;
            else if(c1<c) low++;
            else high--;
        }
        return false;
    }
};