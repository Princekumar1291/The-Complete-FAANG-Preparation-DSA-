#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.emplace_back(40);
    v.emplace_back(50);
    v.emplace_back(60);
    v.emplace_back(70);
    v.emplace_back(80);

    vector<int> v1(5); //5 size vector with all value is 0 or garbage value

    vector<int> v2(5,0); //5 size vector with all value is 0

    vector<int> v3(v1); //vector v1 is coppied to v3 vector

    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }cout<<endl;

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
      cout<<*it<<" ";
    }cout<<endl;

    for(auto it=v.begin();it!=v.end();it++){
      cout<<*it<<" ";
    }cout<<endl;

    for(auto ele:v){   //forEach loop
      cout<<ele<<" ";
    }cout<<endl;

    v.erase(v.begin());
    for(auto ele:v){   //forEach loop
      cout<<ele<<" ";
    }cout<<endl;

    v.erase(v.begin(),v.begin()+3); //idx 1,2,3 [0,4)
    for(auto ele:v){   //forEach loop
      cout<<ele<<" ";
    }cout<<endl;
    
    cout<<v.size()<<endl; //size of vector

    v.insert(v.begin(),900);
    for(auto ele:v){   //forEach loop
      cout<<ele<<" ";
    }cout<<endl;

    v.insert(v.begin()+1,{12,13,45,34,76,78});
    for(auto ele:v){   //forEach loop
      cout<<ele<<" ";
    }cout<<endl;


    v.pop_back(); //delete last element

    v1.swap(v2);  //swap vector v1 and v2

    v2.clear();  //clear all data of vector

    cout<<v.empty()<<endl; //vector is empty or not
    return 0;
}