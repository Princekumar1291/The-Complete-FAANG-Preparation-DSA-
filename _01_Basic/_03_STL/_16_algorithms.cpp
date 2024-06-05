#include<bits/stdc++.h>
using namespace std;
int main(){
    //for array
    int arr[]={54,879,21,89,213,849,1,87};
    sort(arr,arr+8);
    for(auto ele:arr) cout<<ele<<" ";cout<<endl;
    sort(arr,arr+8,greater<int>());
    for(auto ele:arr) cout<<ele<<" ";cout<<endl;

    //for vector
    vector<int> v;
    v.assign(arr,arr+8);
    v.push_back(200);
    v.push_back(2);
    sort(v.begin(),v.end());
    for(auto ele:v) cout<<ele<<" ";cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(auto ele:v) cout<<ele<<" ";cout<<endl;


    //return no of set bits
    int num=7;
    int ppk=__builtin_popcount(num);
    cout <<ppk<<endl;

    long long num2=7313546546545254;
    int ppk2=__builtin_popcountll(num2);
    cout <<ppk2<<endl;

    //next permutation
    string s="123";
    do{
      cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));
    cout<<endl;

    //max element
    int maxEle=*max_element(v.begin(),v.end());
    cout<<maxEle<<endl;
    int minEle=*min_element(v.begin(),v.end());
    cout<<minEle<<endl;
    return 0;
}