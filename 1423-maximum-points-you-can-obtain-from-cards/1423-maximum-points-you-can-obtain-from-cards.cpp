class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0, sum_left=0, maxi=0;
        for(int i=0; i<k; i++){
            sum+=cardPoints[i];
        }
        for(int i=0; i<=k; i++){
            if(i==0) maxi=max(maxi,sum);
            else {
                sum_left+=cardPoints[cardPoints.size()-i];
                sum-=cardPoints[k-i];
                int a=sum_left +sum;
                maxi=max(maxi,a);
            }
        }
        
        return maxi;
    }
};