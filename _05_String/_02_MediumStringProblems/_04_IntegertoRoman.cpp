#include<bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
  string ans="";
  while(num>0){
      if(num>=1000){
          int temp=num/1000;
          num=num%1000;
          while(temp>0){
              ans+="M";
              temp--;
          }
      }
      else if(num>=500){
          if(num>=900) {
              ans+="CM";
              num=num%100;
          }
          else{
              int temp=num/500;
              num=num%500;
              if(temp==1) ans+="D";
          }
      }
      else if(num>=100){
          if(num>=400){
              ans+="CD";
              num=num%100;
          }
          else{
              int temp=num/100;
              num=num%100;
              while(temp>0){
                  ans+="C";
                  temp--;
              }
          }
      }
      else if(num>=50){
          if(num>=90){
              ans+="XC";
              num=num%10;
          }
          int temp=num/50;
          num=num%50;
          if(temp==1) ans+="L";
      }
      else if(num>=10){
          if(num>=40){
              ans+="XL";
              num=num%10;
          }
          else{
              int temp=num/10;
              num=num%10;
              while(temp>0){
                  ans+="X";
                  temp--;
              }
          }
      }
      else if(num>=5){
          if(num==9) {
              ans+="IX";
              num=0;
          }
          else{
              int temp=num/5;
              num=num%5;
              if(temp==1) ans+="V";
          }
      }
      else{
          if(num==4) ans+="IV";
          else if(num==3) ans+="III";
          else if(num==2) ans+="II";
          else if(num==1) ans+="I";
          num=0;
      }
  }
  return ans;
}

string intToRoman(int num) { 
  vector<string> v1={"","M","MM","MMM"};
  vector<string> v2={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
  vector<string> v3={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
  vector<string> v4={"","I","II","III","IV","V","VI","VII","VIII","IX"};
  
  string ans="";
  ans+=v1[num/1000];
  num=num%1000;

  ans+=v2[num/100];
  num=num%100;

  ans+=v3[num/10];
  num=num%10;

  ans+=v4[num];
  return ans;
}

int main(){
  
  return 0;
}