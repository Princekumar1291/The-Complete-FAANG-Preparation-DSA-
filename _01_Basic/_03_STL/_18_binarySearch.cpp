#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={12,34,67,89,65,344,12,12,5,78,90,34};
    sort(v.begin(),v.end());
    int bs=binary_search(v.begin(),v.end(),344);
    cout<<bs;
    return 0;
}