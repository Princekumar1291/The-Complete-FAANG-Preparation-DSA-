#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool checkKthBit(int n, int k){
        if((n&(1<<k))!=0) return true;
        return false;
    }
};


int main(){
  
  return 0;
}