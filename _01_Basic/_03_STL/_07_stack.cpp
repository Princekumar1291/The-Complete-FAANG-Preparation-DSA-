//st.push(10);
//st.pop();
//st.top();
//st.size();
//st.empty();


#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.pop();
    cout<<st.top()<<endl;  //O(1)
    cout<<st.size()<<endl;  //O(1)
    cout<<st.empty()<<endl;  //O(1)
 
    stack<int> st1;
    stack<int> st2;  
    st1.swap(st2);
    


    return 0;
}