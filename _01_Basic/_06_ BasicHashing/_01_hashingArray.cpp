#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    //precompute
    int hashArray[100000]={0};  //we cannot declare array of size more then 1e6 in main it will give segmentation fault but we can declare globally till 1e8
    for(int i=0;i<n;i++){
      hashArray[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
      int number;
      cin>>number;
      cout<<hashArray[number]<<endl;
    }
    return 0;
}