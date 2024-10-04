#include<bits/stdc++.h>
using namespace std;
void f(){
  cout<<1<<endl;
  f(); 
}
int main(){
  f();
  return 0;
}


//segmentation fault is also called stack overflow

//base case
//recursion tree
//stack overflow