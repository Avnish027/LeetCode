class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0, sum_left=0, maxi=0;
        for(int i=0; i<k; i++){
            sum+=cardPoints[i];
        }
                     maxi=max(maxi,sum);

        for(int i=1; i<=k; i++){
            
                sum_left+=cardPoints[cardPoints.size()-i];
                sum-=cardPoints[k-i];
                int a=sum_left +sum;
                maxi=max(maxi,a);
            
        }
        
        return maxi;
    }
};