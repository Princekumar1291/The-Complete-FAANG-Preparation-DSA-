//st.insert(10);
//st.find(10); //point to the value 10 if exit else return st.end()
//st.erase(10); //delete 10 if exit
//st.count(10); //if exit return 1 else 0


#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;  //in sorted,unique
    st.insert(1);
    st.insert(1);
    st.insert(34);
    st.insert(56);
    st.insert(23);

    auto it=st.find(3);  //point to the value 3 if not exit the return st.end() 
    st.erase(5);   //delete 5 if exit
    int c=st.count(2);  //if exit return 1 else 0
    
    auto it=st.find(90);
    st.erase(it);

    // {1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);  //delete 2,3
    
    return 0;
}