#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate1(int numRows) {
  int n=numRows;
  vector<vector<int>> ans(n,vector<int>(n,1));
  for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
          if(j!=0 && j!=i){
              ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
          }
      }
  }
  for(int i=0;i<n;i++){
      for(int j=n-1;j>i;j--){
          ans[i].pop_back();
      }
  }
  return ans;
}  

vector<vector<int>> generate(int numRows) {
  int n=numRows;
  vector<vector<int>> ans(n);
  for(int i=0;i<n;i++){
      vector<int> temp(i+1,1);
      ans[i]=temp;
      for(int j=0;j<=i;j++){
          if(j!=0 && j!=i){
              ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
          }
      }
  }
  return ans;
}  

int NcR(int n,int r){
  int ans=1; 
  for(int i=1;i<=r;i++){ //nave-> nCr=n!/(r!*(n-r)!)
    ans*=n; //(n/1)*((n-1)/2)*...*((n-r+1)/ r)
    ans/=i;
    n--;
  }
  return ans;
}
void printPascalBett(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<NcR(i,j)<<" ";
    }
    cout<<endl;
  }
}

void printPascalOpt(int n){  //O(n2)
  int num=1;
  for(int i=0;i<n;i++){
    num=1;
    for(int j=0;j<=i;j++){
      cout<<num<<" ";
      num=num*(i-j)/(j+1);
    }
    cout<<endl;
  }
}

int main(){
  vector<vector<int>> ans=generate(5);
  for(auto arr:ans){
    for(auto ele:arr){
      cout<<ele<<" ";
    }
    cout<<endl;
  }
    printPascalOpt(5);
  return 0;
}