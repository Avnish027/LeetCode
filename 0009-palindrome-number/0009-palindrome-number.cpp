class Solution {
public:
    bool isPalindrome(int x) {
        long long a=0;
        int z=x;
        if(x<0) return false;
        while(x){
            int last=x%10;
            a=a*10+last;
            x=x/10;
        }
        if(a==z)return true;
        else return false;
    }
};