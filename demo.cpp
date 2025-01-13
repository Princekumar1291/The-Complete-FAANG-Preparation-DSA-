#include<bits/stdc++.h>
using namespace std;
void display(vector<int> v){
  for(auto ele:v)cout<<ele<<" ";
  cout<<endl;
}
int main(){
  vector<int> v={12,34,56,78,54,23,1,34};
  display(v);
  v.insert(v.begin(),100);
  display(v);
  v.clear();
  cout<<v.empty();
}