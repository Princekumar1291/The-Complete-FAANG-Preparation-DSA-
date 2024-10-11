class Solution {
public:
    const long long MOD = 1000000007;
    long long modExp(long long base, long long exp, long long mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long evenPos = (n + 1) / 2; 
        long long oddPos = n / 2;      

        long long evenPart = modExp(5, evenPos, MOD); 
        long long oddPart = modExp(4, oddPos, MOD); 

        return (evenPart * oddPart) % MOD;
    }
};
