class Solution {
public:
    int trap(vector<int>& height) {
        int s=0, e=height.size()-1, len=height.size();
        vector<int> left(len,0);
        vector<int> right(len,0);
        for(int i=1; i<len; i++){
            left[i]=max(left[i-1],height[i-1]);
        }
        for(int i=len-2; i>=0; i-- ){
            right[i]=max(right[i+1],height[i+1]);
        }
        
        int sum=0;
        for(int i=0; i<len; i++){
            if(height[i]<min(left[i],right[i])){
                sum+= min(left[i],right[i])-height[i];
            }
        }
        return sum;
    }
};