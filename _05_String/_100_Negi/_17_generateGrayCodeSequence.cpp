//Problem Link: https://www.geeksforgeeks.org/problems/generate-grey-code-sequences/1?page=5&difficulty%255B%255D=0&category%255B%255D=Strings&sortBy=submissions


#include<bits/stdc++.h>
using namespace std;

vector <string> generateCode(int n){
  if(n==1) return {"0","1"};
  vector<string> temp=generateCode(n-1);
  vector<string> ans;
  for(int i=0;i<temp.size();i++){
      ans.push_back("0"+temp[i]);
  }
  for(int i=temp.size()-1;i>=0;i--){
      ans.push_back("1"+temp[i]);
  }
  return ans;
}



vector <string> generateCode(int N){
  vector<string> ans;
  int n=pow(2,N);
  int c=0;
  for(int i=0;i<n;i++){
    string temp=bitset<32>(i).to_string();
    temp=temp.substr(32-N);
    ans.push_back(temp);
  }
  return ans;
}



int main(){
  
  return 0;
}