//min heap

#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>& v,int i){
    int n=v.size();
    while(i*2+1<n){
        int l=2*i+1;
        int r=2*i+2;
        if(r<n && v[r]<v[l] && v[r]<v[i]){
          swap(v[r],v[i]);
          i=r;
        }
        else if(l<n && v[l]<v[i]){
          swap(v[l],v[i]);
          i=l;
        }
        else break;
    }
}

void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v={10,2,14,11,1,4};
    int n=v.size();
    display(v);
    for(int i=n/2;i>=0;i--){
        heapify(v,i);
    }
    display(v);
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