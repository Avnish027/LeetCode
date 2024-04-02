// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1, e=n, mid=s+(e-s)/2, index=0;
        while(s<=e){
            if(isBadVersion(mid)==true){
                index=mid;
                e=mid-1;
            }
            else s=mid+1;
            mid=s+(e-s)/2;
        }
        return index;
    }
};