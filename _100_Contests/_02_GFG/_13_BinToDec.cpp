#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binary_to_decimal(string str) {
        reverse(str.begin(),str.end());
        int ans=0;
        for(int i=0;i<str.size();i++){
            int t=str[i]-'0';
            ans+=t*pow(2,i);
        }
        return ans;
    }
};

int main(){
  
  return 0;
}