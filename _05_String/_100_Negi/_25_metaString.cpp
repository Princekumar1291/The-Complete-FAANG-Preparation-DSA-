//Probelm Link: https://www.geeksforgeeks.org/problems/meta-strings5713/1?page=4&difficulty%255B%255D=0&category%255B%255D=Strings&sortBy=submissions


#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string S1, string S2){
    int n=S1.size();
    int m=S2.size();
    if(n!=m || S1==S2) return false;
    int c=0;
    int t1,t2;
    for(int i=0;i<n;i++){
        if(S1[i]!=S2[i]) {
            c++;
            if(c==1) t1=i;
            if(c==2) t2=i;
        }
    }
    if(c!=2) return false;
    swap(S1[t1],S1[t2]);
    return S1==S2;
}
int main(){
  string s1,s2;
  cin>>s1>>s2;
  cout<<metaStrings(s1,s2);
  return 0;
}