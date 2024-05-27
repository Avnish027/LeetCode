class Solution {
public:
    
    // double fun(double x, int n){
    //     if(n==0) return 1;
    //     if(n%2){
    //         return x*fun(x,n/2)*fun(x,n/2);
    //     }
    //     else return fun(x,n/2)*fun(x,n/2);
    // }
    
    double fun(double x, int n){
        if(n==1) return x;
        if(n==0) return 1;
        if(n%2==0) return fun(x*x,n/2);
        else return x*fun(x*x,n/2);
    }
    
    double myPow(double x, int n) {
        // double ans=pow(x,n);
        // return ans;
        double ans=fun(x,abs(n));
        if(n<0) return 1/ans;
        else return ans;
    }
};