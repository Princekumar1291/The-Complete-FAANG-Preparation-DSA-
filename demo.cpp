#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=20;
    int b=30;
    float ans=sqrt(a*a+b*b);
    stringstream stream;
    stream << fixed << setprecision(2) << ans;
    stream >> ans;
    cout<<ans;
    return 0;
}