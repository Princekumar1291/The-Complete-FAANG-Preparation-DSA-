// https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1


class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n=start.size();
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++) temp.push_back({start[i],end[i]});
        sort(temp.begin(),temp.end(),[](const auto& a,const auto& b){
            return a.second<b.second;
        });
        int last=-1;
        int ans=0;
        int i=0;
        while(i<n){
            if(temp[i].first>last){
                ans++;
                last=temp[i].second;
            }
            i++;
        }
        return ans;
    }
};