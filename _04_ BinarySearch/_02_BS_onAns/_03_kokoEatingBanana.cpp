#include<bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
  int left = 1;
  int right = *max_element(piles.begin(), piles.end());
  int ans=0;
  while (left <= right) {
      int mid = left + (right - left) / 2;
      long long total_hours = 0;
      for (int pile : piles) {
          if(pile%mid==0) total_hours+=pile/mid;
          else total_hours+=(pile/mid)+1;
          // total_hours += ceil((double)pile / mid);
      }
      if (total_hours > h) {
          left = mid + 1;
      }
        else {
          ans=mid;
          right = mid-1;
      }
  }
  return ans;
}


int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    cout << "Piles: ";
    for (int pile : piles) {
        cout << pile << " ";
    }
    cout << "\nHours: " << h << endl;

    int result = minEatingSpeed(piles, h);
    cout << "The minimum eating speed is: " << result << endl;

    return 0;
}