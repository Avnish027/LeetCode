class Solution {
public:
    int reverse(int x) {
        // int rev=0;
        // while(x){
        //     int a=x%10;
        //     if(rev> (INT_MAX/10)) return 0;
        //     if(rev< (INT_MIN/10)) return 0;
        //     rev=rev*10+a;
        //     x=x/10;
        // }
        // return rev;
        
        int ans=0;
        while(x){
            int digit =x%10;
            x/=10;
             if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) return 0;
        // Check for underflow
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) return 0;
            ans=ans*10+digit;
        
        }
        return ans;
        
    }
};