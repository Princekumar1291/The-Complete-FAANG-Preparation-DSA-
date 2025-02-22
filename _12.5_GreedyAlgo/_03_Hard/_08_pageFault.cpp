// https://www.geeksforgeeks.org/problems/page-faults-in-lru5603/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=page-faults-in-lru





class Solution{
public:
    int pageFaults(int n, int c, int pages[]){
        // code here
        int ans=0;
        int maxi=*max_element(pages,pages+n);
        vector<bool> freq(maxi+1,false);
        queue<int> q;
        for(int i=0;i<n;i++){
            int curr=pages[i];
            if(freq[pages[i]]==false){
                if(q.size()<c){
                    q.push(curr);
                    freq[curr]=true;
                    ans++;
                }
                else{
                    int f=q.front();
                    q.pop();
                    q.push(curr);
                    freq[f]=false;
                    freq[curr]=true;
                    ans++;
                }
            }
            else{
                int s=q.size();
                for(int i=0;i<s;i++) {
                    int f=q.front();
                    q.pop();
                    if(f!=curr) q.push(f);
                }
                q.push(curr);
            }
        }
        return ans;
    }
};