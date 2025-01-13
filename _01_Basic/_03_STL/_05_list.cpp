//extra from vector 
//l.push_front()


#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(5);

    for(auto ele:l){
      cout<<ele<<" ";
    }cout<<endl;
    return 0;
}