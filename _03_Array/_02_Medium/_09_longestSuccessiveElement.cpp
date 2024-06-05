#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>&a, int num) {
    int n = a.size(); //size of array
    for (int i = 0; i < n; i++) {
        if (a[i] == num)
            return true;
    }
    return false;
}
int longestSuccessiveElements(vector<int>&a) {
    int n = a.size(); //size of array
    int longest = 1;
    //pick a element and search for its
    //consecutive numbers:
    for (int i = 0; i < n; i++) {
        int x = a[i];
        int cnt = 1;
        //search for consecutive numbers
        //using linear search:
        while (linearSearch(a, x + 1) == true) {
            x += 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }
    return longest;
}

int longestSuccessiveEleAvg(vector<int> v){
  // unordered_set<int> st;
  // for(int ele:v) st.insert(ele);
  // v.clear();

  // for(auto ele:st) v.push_back(ele);
  
  int n=v.size();
  sort(v.begin(),v.end());
  // for(int ele:v)cout<<ele<<" ";
  // cout<<endl;

  int ele=v[0];
  int count=1;
  int maxVal=0;
  for(int i=1;i<n;i++){
    if (v[i]==v[i-1]) continue;
    else if(v[i]==ele+count){
      count++;
      maxVal=max(maxVal,count);
    }
    else{
      ele=v[i];
      count=1;
    }
  }
  return maxVal;
}

int longestSuccessiveElementsOpt(vector<int> &a){ 
  //O(n)
  unordered_set<int> st;
  for (int ele : a) st.insert(ele);

  int maxEle = 0;

  for (int ele : st){
    int tarEle = ele + 1;
    int currMax = 1;
    if (st.find(ele - 1) != st.end());
    else{
      while (st.find(tarEle) != st.end()){
        currMax++;
        tarEle++;
      }
      maxEle = max(maxEle, currMax);
    }
  }
  return maxEle;
}

int main(){
    vector<int> a ={ 15, 6 ,2 ,1 ,16 ,4 ,2 ,29 ,9 ,12 ,8 ,5 ,14 ,21 ,8, 12, 17 ,16 ,6,26, 3} ;
    int ans = longestSuccessiveElementsOpt(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

