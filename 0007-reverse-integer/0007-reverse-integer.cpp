class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x){
            int a=x%10;
            if(rev> (INT_MAX/10)) return 0;
            if(rev< (INT_MIN/10)) return 0;
            rev=rev*10+a;
            x=x/10;
        }
        return rev;
        
    }
};