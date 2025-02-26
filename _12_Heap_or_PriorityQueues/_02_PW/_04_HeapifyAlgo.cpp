//min heap

#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>& v,int i){
    int n=v.size();
    while(true){
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

void pop(vector<int>& v) {
    int n = v.size();
    if (n == 0) {
        cout << "Heap is empty!" << endl;
        return;
    }
    v[0] = v[n - 1]; // Move the last element to the root
    v.pop_back();     // Remove the last element
    heapify(v, 0);    // Reheapify from the root
}

void push(vector<int> arr,int val){
    int n=arr.size();
    arr.push_back(val);
    int curr=n-1;
    while(curr>0){
      int par=(curr-1)/2;
      if(arr[curr]<arr[par]){
        swap(arr[curr],arr[par]);
        curr=par;
      }
      else break;
    }
  }

int main(){
    vector<int> v={140,112,30,34,50,12,7410,8052,940,41}; //12 34 30 112 41 140 7410 8052 940 50 
    int n=v.size();
    display(v);
    for(int i=n/2;i>=0;i--){
        heapify(v,i);
    }
    display(v);
    pop(v);
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