#include<iostream> 
using namespace std;
int main(){
  int n;
  cout<<"Enter number crossponding to day: ";
  cin>>n;

  switch(n){
    case 1:cout<<"Monday";
      break;
    case 2:cout<<"Tuesday";
      break;
    case 3:cout<<"Wednesday";
      break;
    case 4:cout<<"Thrusday";
      break;
    case 5:cout<<"Friday";
      break;
    case 6:cout<<"Saturday";
      break;
    case 7:cout<<"Sunday";
      break;
    default: cout<<"Enter a valid number.";

  }
  return 0;
}




// #include <iostream>
// using namespace std;
// int main()
// {
//     char x = 'A';
//     switch (x) {
//     case 'A':
//         cout << "Choice is A";
//         break;
//     case 'B':
//         cout << "Choice is B";
//         break;
//     case 'C':
//         cout << "Choice is C";
//         break;
//     default:
//         cout << "Choice other than A, B and C";
//         break;
//     }
//     return 0;
// }
