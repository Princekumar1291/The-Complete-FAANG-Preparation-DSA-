#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<int,int> mmp;  //store no unique keys but in sorted order
    // mmp[1]=100;   wrong for multimap
    mmp.insert({3,45});
    mmp.insert({2,20});
    mmp.insert({4,90}); //{{1,10},{2,20},{3,45},{4,90}}
    mmp.insert(pair<int,int>(3,10));
    mmp.insert(pair<int,int>(5,10));

    for(auto ele:mmp){
      cout<<ele.first<<" "<<ele.second<<endl;
    }

    auto it=mmp.find(3);  //if not exit point after the map mmp.end()
    cout<<(*it).second<<endl;
    
    return 0;
}