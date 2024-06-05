#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &v){
  int n = v.size();
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) mp[v[i]]++;

  for (auto it : mp) {
    if (it.second > (n / 2)) return it.first;
  }
  return -1;
}

int majorityElementBySorting(vector<int> &v)
{
  int n = v.size();
  sort(v.begin(), v.end());
  int midElement = v[n / 2];
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (v[i] == midElement)
      count++;
    if (count > n / 2)
      return midElement;
  }
  return -1;
}

int majorityElement(vector<int> &v){ //This is  Boyer-Moore Voting Algorithm --O(n)
  int n = v.size();
  int c = 0;
  int ele = v[0];
  for (int i = 0; i < n; i++){
    if (c == 0){
      ele = v[i];
      c++;
    }
    else if (v[i] == ele) c++;
    else c--;
  }
  return ele;  //if ele always exit other wise traverse to array and check the frequency of ele is > n/2
}

int main()
{
  vector<int> test_case = {3, 3, 4, 2, 4, 4, 2, 4, 4};
  int result = majorityElement(test_case);
  cout << "The majority element is: " << result << endl;
  result = majorityElementBySorting(test_case);
  cout << "The majority element is: " << result << endl;

  return 0;
}