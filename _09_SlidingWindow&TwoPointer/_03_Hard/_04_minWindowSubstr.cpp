// https://leetcode.com/problems/minimum-window-substring/description/

class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        int a=0,b=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            vector<int> freq(256,0);
            for(int j=0;j<m;j++) freq[t[j]]++;
            for(int k=i;k<n;k++){
                freq[s[k]]--;
                int c=0;
                for(int ele:freq) if(ele>0) c++;
                if(c==0 && ans>k-i+1){
                    ans=k-i+1;
                    a=i;
                    b=k;
                    break;
                }
            }
        }
        return ans==INT_MAX ? "" : s.substr(a,b-a+1);
    }
};



class Solution {
    public:
        string minWindow(string s, string t) {
            int n = s.size();
            int m = t.size();
            int strInd = -1;
            int ans = INT_MAX;
            int l = 0, r = 0, c = 0;
            vector<int> freq(256, 0);
    
            for (char ele : t) freq[ele]++;
    
            while (r < n) {
                if (freq[s[r]] > 0) c++;
                freq[s[r]]--;
    
                while (c == m) {
                    if (r - l + 1 < ans) {
                        strInd = l;
                        ans = r - l + 1;
                    }
                    freq[s[l]]++;
                    if (freq[s[l]] > 0) c--;
                    l++;
                }
                r++;
            }
            
            return strInd == -1 ? "" : s.substr(strInd, ans);
        }
    };
    