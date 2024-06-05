#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> st;  //in sorted only, not unique
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(34);
    st.insert(56);
    st.insert(23);

    auto it=st.find(3);  //point to the value 3 if not exit the return st.end() 
    st.erase(5);   //delete all 5 if exit
    int c=st.count(2);  //no of 2's in multiset
    
    auto it4=st.find(90);
    st.erase(it4);

    // {1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);  //delete 2,3

    // st.erase(st.find(1),st.find(1)+2);
    
    // Print the remaining elements in the multiset
    for (int x : st) {
        cout << x << " ";
    }
    return 0;
}