#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;  //store unique keys in sorted order
    mp[1]=10;
    mp.insert({3,45});
    mp.insert({3,50});  //not inserted
    mp.insert({2,20});
    mp.insert({4,90}); //{{1,10},{2,20},{3,45},{4,90}}

    for(auto ele:mp){
      cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<mp[2]<<endl;

    auto it=mp.find(3);  //if not exit point after the map mp.end()
    cout<<(*it).second<<endl;
    
    return 0;
}