class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        if(s>9*d) return "-1";
        string ans="";
        bool check=true;
        for(int i=1;i<=d;i++){
            if(s>9){
                ans+="9";
                s-=9;
            }
            else{
                if(i!=d && check){
                    string temp=to_string(s-1);
                    s=1;
                    ans+=temp;
                    check=false;
                }
                else if(i!=d){
                    ans+="0";
                }
                else if(i==d){
                    string temp=to_string(s);
                    ans+=temp;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};