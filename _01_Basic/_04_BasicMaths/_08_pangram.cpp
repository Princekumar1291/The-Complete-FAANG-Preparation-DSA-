#include<bits/stdc++.h>
using namespace std;
bool isPangram(string& s){
  unordered_set<char> st;
  for(char ch:s) st.insert(ch);
  return s.size()==26 ? true :false;
}

void print(string s){
  unordered_set <char> st;
  vector<bool> frequency(26,0);
  for(auto ele:st) frequency[ele-'a'];
  for(int ele:frequency) if(ele!=1 ) cout<<ele+'a';
}

bool isPangramCaseNotMatter(string s){
  unordered_set<char> st;
  for(auto ch:st){
    int asc=ch;
    int ascL=0;
    int ascS=0;
    if(asc>=65 && asc<=90){
      ascL=(int)ch+25+7;
      if(st.find((char)ascL) ==st.end() && st.find(ch)==st.end()){
        st.insert(ch);
      }
    }
    else{
      ascS=ch-26-6;
      if(st.find(ascS)==st.end() && st.find(ch)==st.end()){
        st.insert(ch);
      }
    }
  }
  return st.size()==26 ? true :false;
}


bool frequencyCheck(string& s){
  vector<int> freq(256,0);
  for(char ele:s) freq[(int)ele]=1;
  for(int i=65;i<=90;i++){
    if(freq[i]==0 && freq[i+25+7]==0) return false;
  }
  return true;
}




int main(){
  cout<<"Enter String: ";
  string s;
  cin>>s;
  bool ans=frequencyCheck(s);
  cout<<ans;
  return 0;
}

