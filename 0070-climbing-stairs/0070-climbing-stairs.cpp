class Solution {
public:
    int climbStairs(int n) {
        int one=1, two=2;
        if(n==1 || n==2)  return n;
        int ways=0;
        for(int i=3; i<=n; i++){
            ways=one+two;
            int a=two;
            two=ways;
            one=a;
        }
        return ways;
    }
};