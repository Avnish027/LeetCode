class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        long long sum=0;
        int decrease=0; 
        int i= happiness.size()-1;
        while(i>=0 && k--){
            if(happiness[i]-decrease>=0){
                sum+=happiness[i--]-decrease;
            }
            else sum+=0;
            decrease++;
        }
        return sum;
    }
};