// Problem Link: https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/


#include<bits/stdc++.h>
using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches) {
  queue<int> q;
  int n=q.size();
  for(int i=0;i<students.size();i++){
      q.push(students[i]);
  }
  for(int i=0;i<sandwiches.size();i++){
      if(q.front()==sandwiches[i]){
          q.pop();
      }
      else{
          int temp=q.size();
          int c=0;
          while(q.front()!=sandwiches[i]){
              c++;
              int p=q.front();
              q.pop();
              q.push(p);
              if(c>temp) return q.size();
          }
          q.pop();
      }
  }
  return 0;
}


int main(){
  
  return 0;
}