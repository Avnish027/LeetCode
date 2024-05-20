class Solution {
public:
    bool fun(int n){
        if(n==1) {
            return true;
        }
        if(n%3!=0) return false;
        else {n=n/3;}
        return fun(n);
    }
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        return fun(n);
    }
};