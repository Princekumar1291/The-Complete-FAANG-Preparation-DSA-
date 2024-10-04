#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>& v,int i,int j){
  if(i>=j) return ;
  swap(v[i],v[j]);
  reverseArray(v,i+1,j-1);
}

void reverseArray2(vector<int>& v){

}


void print(vector<int>& v){
  for(int ele:v)cout<<ele<<" ";cout<<endl;
}
int main(){
  vector<int> v={13,54,56,7,89,0,9,65,4,3};
  int i=0,j=v.size()-1;
  reverseArray(v,i,j);
  print(v);
  return 0;
}