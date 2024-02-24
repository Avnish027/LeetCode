class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int s=0, e=x, mid=s+(e-s)/2, ans;
        while(s<=e){
        if(mid==(x/mid)) return mid;
        else if(mid>=(x/mid)) e=mid-1;
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
        }
        return ans;
    }
};