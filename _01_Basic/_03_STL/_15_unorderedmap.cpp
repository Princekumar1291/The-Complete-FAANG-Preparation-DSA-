#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> ump;  //store unique keys but not in sorted order
    ump[1]=100;   
    ump.insert({3,45});
    ump.insert({2,20});
    ump.insert({4,90}); //{{1,10},{2,20},{3,45},{4,90}}
    ump.insert(pair<int,int>(3,10)); //not inserted
    ump.insert(pair<int,int>(5,10));

    for(auto ele:ump){
      cout<<ele.first<<" "<<ele.second<<endl;
    }

    auto it=ump.find(3);  //if not exit point after the map ump.end()
    cout<<(*it).second<<endl;
    
    return 0;
}