class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        string ans="";
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]==ch) c++;
            if(c==count){
                i++;
                while(i<n){
                    ans+=s[i++];
                }
            }
        }
        return ans;
    }
};