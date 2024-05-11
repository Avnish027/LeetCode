class Solution {
public:
    const int MOD = 1000000007; // 10^9 + 7

// Function to calculate (base^exponent) % MOD
long long power(long long base, long long exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}
    int monkeyMove(int n) {
         int result = power(2,n);
          result = (result - 2 + MOD) % MOD;
        return result;
    }
};