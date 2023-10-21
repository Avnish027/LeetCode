class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        long long int mid= s+(e-s)/2;
        int ans;
        while(s<=e){
            if((mid*mid)==x){
                ans=mid;
                return mid;
            }
            else if(mid*mid>x){
                e=mid-1;
            }
            else {
                ans=mid;
                s=mid+1;
            }
            mid= s+(e-s)/2;
        }
        return ans;
        
    }
};