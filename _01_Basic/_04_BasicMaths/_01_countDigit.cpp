// Problem Link: https://www.geeksforgeeks.org/problems/count-digits5716/1

class Solution{
public:
    int evenlyDivides(int N){
        int divisibles = 0;
        int num = N;
        
        while(num){
            int digit = num % 10;
            if(digit != 0 && N % digit == 0) divisibles++;
            num /= 10;
        }
        return divisibles;
    }
};