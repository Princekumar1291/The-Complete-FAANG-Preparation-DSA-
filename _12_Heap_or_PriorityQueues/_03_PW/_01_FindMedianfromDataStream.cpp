//Problem Link: https://leetcode.com/problems/find-median-from-data-stream/description/


class MedianFinder {
private:
    priority_queue<int, vector<int>, greater<int>> minpart;
    priority_queue<int> maxpart;
public:
    MedianFinder(){}

    void addNum(int num) { 
        minpart.push(num);
        if(!maxpart.empty() && maxpart.top()>minpart.top()){
            int a=maxpart.top();maxpart.pop();
            int b=minpart.top();minpart.pop();
            minpart.push(a);
            maxpart.push(b);
        }
        if(minpart.size()>maxpart.size()+1){
            int a=minpart.top();minpart.pop();
            maxpart.push(a);
        }
    }
    
    double findMedian(){
        if(minpart.size() > maxpart.size()) return minpart.top();
        return (maxpart.top()+minpart.top())/2.0; 
    }
};