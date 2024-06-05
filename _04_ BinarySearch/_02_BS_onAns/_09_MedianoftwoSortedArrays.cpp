


#include <bits/stdc++.h>
using namespace std;

double median(vector<int>& a, vector<int>& b) {
    //size of two given arrays:
    int n1 = a.size(), n2 = b.size();

    vector<int> arr3;
    //apply the merge step:
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) arr3.push_back(a[i++]);
        else arr3.push_back(b[j++]);
    }

    //copy the left-out elements:
    while (i < n1) arr3.push_back(a[i++]);
    while (j < n2) arr3.push_back(b[j++]);

    //Find the median:
    int n = n1 + n2;
    if (n % 2 == 1) {
        return (double)arr3[n / 2];
    }

    double median = ((double)arr3[n / 2] + (double)arr3[(n / 2) - 1]) / 2.0;
    return median;
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i=0;
    int j=0;
    int m1=0;
    int m2=0;
    int t=0;
    int n=nums1.size();
    int m=nums2.size();
    int mid=(n+m)/2;

    while(t<=mid){
        m2=m1;
        if(i<n && j<m){
            if(nums1[i]<nums2[j]){
                m1=nums1[i];
                i++;
            }
            else{
                m1=nums2[j];
                j++;
            }
        }
        else if(i<n){
            m1=nums1[i];
            i++;
        }
        else if(j<m){
            m1=nums2[j];
            j++;
        }
        t++;
    }
    cout<<m1<<" "<<m2;
    if((n+m)%2!=0) return m1;
    else return ((double)m1+m2)/2.0;
}

int main()
{
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is " << fixed << setprecision(1)
         << median(a, b) << '\n';
}

