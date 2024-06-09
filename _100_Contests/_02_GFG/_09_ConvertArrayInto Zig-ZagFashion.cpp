#include<bits/stdc++.h>
using namespace std;

void zigZag(int n, vector<int> &arr) {
  /*Initial: [4, 3, 7, 8, 6, 2, 1]
    Step 1:  [3, 4, 7, 8, 6, 2, 1]
    Step 2:  [3, 7, 4, 8, 6, 2, 1]
    Step 3:  [3, 7, 4, 8, 6, 2, 1]
    Step 4:  [3, 7, 4, 8, 2, 6, 1]
    Step 5:  [3, 7, 4, 8, 2, 6, 1]
    Step 6:  [3, 7, 4, 8, 2, 6, 1]
    Final:   [3, 7, 4, 8, 2, 6, 1]      } */
    
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
        }
        else{
            if(arr[i]<arr[i+1]) swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
  
  return 0;
}