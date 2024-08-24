//Segmented Sieve

//step 1->Generate all prime less then equal sqrt(R)
//step 2->Create a Dummy array of size R-L+1 and marked with 1
//step 3->mark multiple of primes in L-R dummy array



#include<bits/stdc++.h>
using namespace std;
void generatePrime(int n,vector<int>& primes){
  for(int i=2;i*i<=n;i++){
    if(primes[i]==1){
      for(int j=i*i;j<=n;j+=i){
        primes[j]=0;
      }
    }
  }
}
vector<int> filterPrime(vector<int>& primes){
  vector<int> fPrimes;
  for(int i=2;i<primes.size();i++) if(primes[i]==1) fPrimes.push_back(i);
  return fPrimes;
}
int main(){
  long long L=1000010000;
  long long R=1000020000;
  int n=sqrt(R);
  vector<int> primes(n+1,1);
  generatePrime(n,primes);
  vector<int> fPrime=filterPrime(primes);
  
  vector<int> ans(R-L+1,1);
  for(int ele:fPrime){
    long long rem=L%ele;
    long long temp=(rem==0)?L:L+(ele-rem);
    temp=max(temp,(long long)ele*ele);
    for(long long j=temp;j<=R;j+=ele){
      ans[j-L]=0;
    }
  }

  for(int i=0;i<ans.size();i++) if(ans[i]==1) cout<<i+L<<" ";
  
  return 0;
}