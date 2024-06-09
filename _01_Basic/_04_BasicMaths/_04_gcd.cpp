// Problem Link: https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   long long A,B;
//   cin>>A>>B;
//   long long gcd = __gcd(A, B);
//   long long lcm = (A * B) / gcd;
//   cout<<gcd<<" "<<lcm;
//   return 0;
// }









   //using euclidean algo
#include <iostream> 
using namespace std; 
int gcd(int a, int b) {
	if (a == 0)  return b; 
	if (b == 0)  return a; 
	if (a == b)  return a; 
	if (a > b) return gcd(a - b, b); 
		return gcd(a, b - a); 
} 

int gcd2(int a, int b) {   // O(lon(n))
    while (a>0 && b>0) {
			if(a>b) a%=b;
			else b%=a;
    }
		if(a==0) return b;
    return a;
}

int main(){ 
	int a ,b; 
  cout<<"Enter two number: ";
  cin>>a>>b;
	cout<<gcd(a, b)<<" "; 
	cout<<gcd2(a,b)<<endl;
	return 0; 
}











