#include<bits/stdc++.h>
using namespace std;
int main(){
  set<int> st;
  st.insert(1);
  st.insert(3);
  st.insert(3);
  st.insert(2);
  st.insert(4);

  st.erase(3);
  for(auto ele:st){
    cout<<ele<<" ";
  }
  return 0;
}
