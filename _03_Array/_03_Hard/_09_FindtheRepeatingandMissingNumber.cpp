#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size(); 
    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) cnt++;
        }
        if (cnt == 2) repeating = i;
        else if (cnt == 0) missing = i;
        if (repeating != -1 && missing != -1) break;
    }
    return {repeating, missing};
}

vector<int> findTwoElement(vector<int> v, int n){
  int rep=-1;
  int mis=-1;
  vector<int> hashArray(n+1,0);
  for(int i=0;i<n;i++){
      hashArray[v[i]]+=1;
  }
  for(int i=n;i>=1;i--){
      if(hashArray[i]==0) mis=i;
      else if(hashArray[i]==2) rep=i;
      else if(rep!=-1 && mis!=-1) break;
  }
  return {rep,mis};
}

// not for larger n
vector<int> findTwoElement(vector<int> v, int n){
    long long sumN=n*(n+1)/2;
    long long sumN2=(n*(n+1)*(2*n+1))/6;
    long long sumEleN=0;
    long long sumEleN2=0;
    for(int i=0;i<n;i++){
        sumEleN+=v[i];
        sumEleN2+=((long long)v[i]*(long long)v[i]);
    }
    long long xmy=sumEleN-sumN;
    long long xpy=sumEleN2-sumN2;
    xpy/=xmy;

    long long x=(xmy+xpy)/2;
    long long y=xpy-x;

    return {(int)x,(int)y};
}

vector<int> findTwoElement(vector<int> v, int n){
    int mis=-1;
    int rep=-1;
    for(int i=0;i<n;i++){
        if(v[abs(v[i])-1]<0) rep=abs(v[i]);
        else v[abs(v[i])-1]=-v[abs(v[i])-1];
    }
    for(int i=0;i<n;i++){
        if(v[i]>0) {
            mis=i+1; 
            break;
        }
    }
    return {rep,mis};
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}


