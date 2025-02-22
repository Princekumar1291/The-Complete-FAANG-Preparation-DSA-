https://www.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card



class Solution{
  public:
      vector<int> minPartition(int sum)
      {
          // code here
          vector<int> coins(10,0);
          coins[0]=2000;
          coins[1]=500;
          coins[2]=200;
          coins[3]=100;
          coins[4]=50;
          coins[5]=20;
          coins[6]=10;
          coins[7]=5;
          coins[8]=2;
          coins[9]=1;
          int n=coins.size();
          vector<int> ans;
          for(int i=0;i<n;i++){
              int coin=sum/coins[i];
              sum%=coins[i];
              for(int j=0;j<coin;j++) ans.push_back(coins[i]);
          }
          return ans;
      }
  };