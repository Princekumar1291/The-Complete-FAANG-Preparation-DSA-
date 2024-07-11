//Min Heap


#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v){
  for(int ele:v)cout<<ele<<" ";
  cout<<endl;
}
void heapify(vector<int>& v,int i){
  int n=v.size();
  while(true){
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && v[i]>v[l]){
      if(r<n && v[r]<v[l]) {
        swap(v[r],v[i]);
        i=r;
      }
      else{
        swap(v[i],v[l]);
        i=l;
      }
    }
    else if(r<n && v[i]>v[r]){
      if(v[l]<v[r]){
        swap(v[l],v[i]);
        i=l;
      }
      else{
        swap(v[r],v[i]);
        i=r;
      }
    }
    else break;
  }
}
int main(){
  vector<int> v={10,22,14,11,1,40};
  int n=v.size();
  print(v);
  // for(int i=n/2-1;i>=0;i--){
  //   heapify(v,i);
  // }
  make_heap(v.begin(),v.end(),greater<int>());
  
  make_heap(v.begin(), v.end(),greater<int>());
  print(v);
  return 0;
}


//   Convert array to heap
//Stl MaxHeap--> make_heap(v.begin(),v.end());
//Stl Min_Heap--> make_heap(v.begin(),v.end(),greater<int>());


//push ele to heap by stl
//   v.push_back(5); 
//   push_heap(v.begin(), v.end(),greater<int>());



//if starting from 0 index then 
//l=2*i+1;
//r=2*i+2;
//parent=(i-1)/2;


//if starting from 1 index then 
//l=2*i;
//r=2*i+1;
//parent=i/2;