class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int s1=0;
        int e1=matrix.size()-1;
        int mid=s1+(e1-s1)/2;
        int ans=-1;
        while(s1<=e1){
            if(matrix[mid][0]==target){
            return true;
            }
            else if(matrix[mid][0]>target){
            e1=mid-1;
            }
            else{
            ans=mid;
            s1=mid+1;
            }
            mid=s1+(e1-s1)/2;
        }
    if(ans==-1){
        return 0;
    }
        
        
    int s2=0;
    int e2= matrix[ans].size()-1;
    int mid2=s2 +(e2-s2)/2;
    while(s2<=e2){
    if(matrix[ans][mid2]==target) return true;
        else if(matrix[ans][mid2]>target) e2=mid2-1;
        else s2=mid2+1;
        mid2=s2+(e2-s2)/2;
    }
        return false;
    }
};