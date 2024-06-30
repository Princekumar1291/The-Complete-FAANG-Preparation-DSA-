#include <iostream>
using namespace std;
bool isNumber(string s){
    try{
        long long n=stoll(s);
        return true;
    }catch(...){
        return false;
    }
}
int main() {
    string s="5626dfh874";
    bool ans=isNumber(s);
    ans ? cout<<"yes" : cout<<"No";
    return 0;
}