//All Paterns Problem Link: https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0;i<n;i++){
      for(int i=0;i<n;i++){
        cout<<"* ";
      }
      cout<<endl;
    }
    return 0;
}


//rules
// for the outer loop count the number of lines
// for inner loop focus on the colums & connect them somehow to the row